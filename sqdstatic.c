#include<stdio.h>
#include<stdlib.h>

int top = -1; // stack
int r = -1, f = -1; // queue
int data[100], max_size; // max size of stack and queue

void push(int value) {
    if (top == max_size - 1) {
        printf("Stack is Full\n");
        return;
    }
    data[++top] = value;
}

int pop() {
    if (top == -1) {
        printf("Stack is Empty\nProgramme is Terminated\n");
        exit(1);
    }
    return data[top--];
}

void insert(int value) {
    if (r == max_size - 1) {
        printf("Queue is Full\n");
        return;
    } else {
        if (r == f && r == -1) {
            data[++r] = value;
            f++;
            return;
        }
    }
    data[++r] = value;
}

int delete() {
    if (f > r) {
        printf("Queue is Empty\nProgramme is Terminated");
        f=-1;
        r=-1;
        exit(1);
    } else {
        if (f == r && f == -1) {
            printf("Queue is Empty\n");
            exit(1);
        }
    }
    int x = data[f++];
    return x;
}

int main() {
    int opt = 0, value,choice =0;

    while (1) 
    {
        printf("Choose 1 or 2 \n");
        printf("1) Stack \n2) Queue \n3) Exit\n");
        scanf("%d", &opt);
        if (opt != 1 && opt != 2 && opt!= 3) 
        {
            printf("Enter Valid Value\n");
        }
        else
        {
            break;
        }
    }


    switch (opt) {
        case 1:
        
        printf("Enter Size of Stack\n");
        scanf("%d",&max_size);
        if(!(max_size>=1&&max_size<=100)){
            printf("Enter Size in limit of 100");
            exit(1);
        }
        while(choice!=3){
        printf("Choose the option\n");
        printf("1)Push \n2)Pop \n3)Exit\n");
        scanf("%d",&choice);
        if(choice==1){
            printf("Enter Value to be pushed\n");
            scanf("%d",&value);
            push(value);
        }
        else if(choice==2)
        {
            printf("Data at top : %d\n",pop());
        }
        else if(choice==3){
               printf("Exited From the programme\n");
        }
        }
        break;
        
        case 2: 
        
         printf("Enter Size of Queue\n");
        scanf("%d",&max_size);
        if(!(max_size>=1&&max_size<=100)){
            printf("Enter Size in limit of 100");
            exit(1);
        }
        
        while(choice!=3){
        printf("Choose the option\n");
        printf("1)Insert \n2)Delete \n3)Exit\n");
        scanf("%d",&choice);
        if(choice==1){
            printf("Enter Value to be Inserted\n");
            scanf("%d",&value);
            insert(value);
        }
        else if(choice==2)
        {
            printf("Data at front : %d\n",delete());
        }
        else  if(choice==3){
               printf("Exited From the programme\n");
        }
        }
        break;
       
       default:
       printf("Exited From the programme\n");
       break;
       }
       return 0;
}
