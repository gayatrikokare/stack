#include<stdio.h>
void push();
void pop();
void display();

int arr[20];
int top = -1;


int main(){
int choice;

do{
printf("\n----Menu-----");
printf("\n 1. Push \n 2.Pop \n 3. Display \n 4. Exit \n ");
scanf("%d", &choice);

switch(choice){
case 1:
    push();
break;

case 2:
pop();
break;

case 3:
display();
break;

case 4:
	printf("\nExited the program");
break;


default: 
printf("Invalid choice \n please choose from 1 to 3");
break;

}

}while(choice != 4);


return 0;
}


void push(){
if(top == (sizeof(arr) -1)){
printf("Cannot insert stack is full");
}

else{
int value;
printf("\n Enter an Element :-");
scanf("%d", &value);

if(top == -1){
top = 0;
}

arr[top++] = value;
//top++;
printf("\n Element added successfully");
}
}

void pop(){
if(top == 0){
printf("\n Stack is Empty. Cannot pop elements");

}
else{
//pop here
int a = arr[top-1];
top--;
printf("\n Popped item is %d ",a);
}
}

void display(){
printf("\n Stack is \n ");

for(int i = top-1; i >= 0; i--){
printf("\n  _____");
printf("\n | %d  |", arr[i]);
printf("\n |_____|");
}
}
