#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node* next;
};

struct Stack {
  struct Node* top;
};

void push(struct Stack* stack, int data) {
  struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->next = stack->top;
  stack->top = newNode;
}

int pop(struct Stack* stack) {
  if (stack->top == NULL) {
    printf("Error: stack underflow\n");
    exit(EXIT_FAILURE);
  }
  int data = stack->top->data;
  struct Node* temp = stack->top;
  stack->top = stack->top->next;
  free(temp);
  return data;
}

int main() {
  struct Stack stack;
  stack.top = NULL;

  int numElements;
  printf("How many elements do you want to push onto the stack? ");
  scanf("%d", &numElements);

  for (int i = 0; i < numElements; i++) {
    int element;
    printf("Enter element %d: ", i+1);
    scanf("%d", &element);
    push(&stack, element);
  }

  printf("\nElements popped from stack:\n");

  while (stack.top != NULL) {
    printf("%d\n", pop(&stack));
  }

  return 0;
}
