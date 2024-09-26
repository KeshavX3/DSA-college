#include<stdio.h>

struct  PriorityQ
{
    int data;
    int p;
};

int max_size=10;
struct PriorityQ arr[10];
int cur_size=0;

void insert(int data, int p){
    if(cur_size==max_size){
        printf("Overflow Condition");
    }

    for(int i=cur_size-1;i>=0;i--){
        if(arr[i].p>p){
            arr[i+1].data=arr[i].data;
            arr[i+1].p=arr[i].p;
        }
        else{
            break;
        }
        arr[i+1].data=data;
        arr[i+1].p=p;
        cur_size++;
    }
}
int main(){
    insert(10,2);
    insert(5,3);
    insert(15,1);
    insert(20,0);
    display();
    
    return 0;

}