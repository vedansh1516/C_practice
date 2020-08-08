#include<stdio.h>
#define MAX 5

int array[MAX];
int top = -1;
void push (int value) {
  if (top == MAX - 1)
    {
        printf ("stack is full\n");
    printf ("Can't push %d\n",value);
        
    }
  else
    {
      top++;
      array[top] = value;
      printf("element pushed %d\n",value);
    }
}

void pop ()
{
  if (top == -1)
    printf ("stack is empty");
  else
    {
        printf("element popped %d\n",top);
      top--;
    }
}

void display()
{
     printf ("\nelements are:");

  for (int i = 0; i<=top; i++)
    {
      printf (" %d \n", array[i]);
    }
}
int main(){
    push(5);
    push(7);
    push(8);
    push(4);
    push(9);
    push(0);

    pop();
    pop();
    display();
    return 0;
}


