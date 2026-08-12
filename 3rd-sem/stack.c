#include <stdio.h>

#define SIZE 5

int main(){
    int stack[SIZE];
    int top = -1;
    int choice,value;
    do{
        printf("\n1.push\n2.pop\n3.peek\n4.display\n:");
        scanf("%d",&choice);
        switch(choice){

            case 1: //push
                if (top != SIZE){
                    printf("Enter value: ");
                    scanf("%d",&value);
                    top++;
                    stack[top] = value;
                }
                else{
                    printf("\nStack is Full");
                }
                break;

            case 2: //pop
                if (top != -1)
                    top--;
                else
                    printf("\nStack is empty");
                break;

            case 3: //peek
                if (top != -1)
                    printf("\n\nTopmost element: %d",stack[top]);
                else
                    printf("\nStack is empty");
                break;

            case 4: //display
                if (top != -1){
                    for (int i=top;i>=0;i--)
                        printf("element at %d is %d\n",i,stack[i]);
                }
                else {
                    printf("\nStack is empty");
                }
                break;
        }
    }
    while(1);
    return 0;
}
