/*kwrite a program to create a list and perform the following task */
/*Task 1. store 5 elements in list*/
/*task 2: remove value from 2nd and 4 position from the list.*/
/*Task 3: Insert 3 elements in the end of the list */
/*Task 4: Display the list*/
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

int main() {
    int list[MAX_SIZE];
    int size = 0;

    // Task 1: Store 5 elements in the list
    printf("Task 1: Enter 5 elements into the list:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &list[size]);
        size++;
    }

    // Task 2: Remove values from 2nd and 4th positions
    if (size >= 4) {
        for (int i = 1; i <= 2; i++) {
            for (int j = i + 1; j < size; j++) {
                list[j - 1] = list[j];
            }
            size--;
        }
    } else {
        printf("Task 2: Insufficient elements to remove.\n");
    }

    // Task 3: Insert 3 elements at the end of the list
    printf("Task 3: Inserting 3 elements at the end of the list:\n");
    for (int i = 0; i < 3; i++) {
        printf("Enter element %d: ", size + i + 1);
        scanf("%d", &list[size + i]);
    }
    size += 3;

    // Task 4: Display the list
    printf("Task 4: Displaying the list:\n");
    printf("List: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");

    return 0;
}
