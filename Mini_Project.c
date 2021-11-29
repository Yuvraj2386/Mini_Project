#include<stdio.h>
#include<stdbool.h>
struct node{
    int arr[100];
    int last;
}p;
//Finding Element And Returning Its Position
int Find(int x){    

    for(int i=0;i<=p.last;i++){
        if(x==p.arr[i]) 
        return i+1;
    }
    return 0;

}
//Inserting At The End
void Insert(int A[],int x){  
   A[p.last+1]=x;
    p.last++;

}
//Making List Empty 
void MakeEmpty(int A[]){                                      
  p.last=-1;
  return;
}
//To Check It Is Last Element Or Not
int isLast(int q, int A[]){       
if(p.last==(Find(q)-1)){
    printf("It is last element\n");  
    return 1;
    }
else{   
    printf("It is not last element\n");
    return 0;
}

}
//To Delete First Occurence Of Element In The List
void Delete(int A[],int x){           
    int y=0;
    for(int i=0 ; i <= p.last ; i++){
       if(A[i]==x){
           y=i;
           break;
       }
    }
    for(int i =y ; i<p.last ; i++){
        A[i]=A[i+1];
    
    }
    p.last--;
}
//To Display The Whole List Of Element
void Display(int A[]){               
        if(p.last==-1){
            printf("List is empty\n"); 
        }
 for(int i=0;i<=p.last;i++){
        printf("%d\n",A[i]);
    }
}
//Inserting At The Begining Of The List
void InsertBegining(int A[], int x) {  
int i=p.last;
p.last++;
while(i!=-1 ){
    A[i+1]=A[i];
    i--;
}
A[i+1]=x;

}
//Deleting At The Begining Of List
void DeleteBegining(int A[]){  

    for(int i = 0 ; i <=p.last ; i++){
     
        A[i]=A[i+1];
    }
    p.last--;
}
//Main Function
int main(){
    p.last=-1;
    Insert(p.arr,10);
    Insert(p.arr,20);
    Insert(p.arr,30);
    Insert(p.arr,40);
    InsertBegining(p.arr,123);
    InsertBegining(p.arr,12234);
    DeleteBegining(p.arr);
    Delete(p.arr,30);
    printf("%d\n",p.last);
    Display(p.arr);
    isLast(40,p.arr);
    
    return 0;
}