#include <stdio.h>
#define SIZE 100

int dequeue[SIZE];
int left = -1;
int right = SIZE;

void insertLeft(int);
void insertRight(int);
void retriveLeft();
void retriveRight();
int isFull();
int isEmptyFromLeft();
int isEmptyFromRight();

int main() {
    insertLeft(56);
    insertLeft(77);
    insertRight(90);
    insertRight(100);
    retriveLeft();
    retriveLeft();
    retriveLeft();
    retriveRight();
    retriveRight();
    retriveRight();
    return 0;
}

int isFull() {
    return right - left == 1 ? 1 : 0;
}

int isEmptyFromLeft() {
    return left == -1 ? 1 : 0;
}

int isEmptyFromRight() {
    return right == SIZE ? 1 : 0;
}

void insertLeft(int val) {
    if (isFull()) {
        printf("Dequeu full!\n");
        return;
    }
    dequeue[++left] = val;
}

void insertRight(int val) {
    if (isFull()) {
        printf("Dequeue full!\n");
        return;
    }
    dequeue[--right] = val;
}

void retriveLeft() {
    if (isEmptyFromLeft()) {
        printf("Dequeue is empty\n");
        return;
    }
    printf("%d\n", dequeue[0]);
    int i = 0;
    while (i < left) {
        dequeue[i] = dequeue[i + 1];
        i++;
    }
    left--;
}

void retriveRight() {
    if (isEmptyFromRight()) {
        printf("Dequeue is empty\n");
        return;
    }
    printf("%d\n", dequeue[SIZE - 1]);
    int i = SIZE - 1;
    while (i > right) {
        dequeue[i] = dequeue[i - 1];
        i--;
    }
    right++;
}
