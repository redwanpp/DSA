//Dynamic memory allocation

#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr;
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Entered number of elements: %d\n", n);

    ptr = NULL;

    ptr = (int*) malloc(n * sizeof(int));

    if(ptr == NULL) {
        printf("Memory not allocated\n");
        exit(0);
    }
    else {
        printf("Memory successfully allocated using malloc.\n");

        for(i = 0; i < n; i++) {
            ptr[i] = i+1;
        }

        printf("The elements of array are: ");

        for(i = 0; i < n; i++) {
            printf("%d, ", ptr[i]);
        }
    }

    return 0;
}