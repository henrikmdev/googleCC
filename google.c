#include <stdio.h>

int list[4] = {10, 15, 3, 7};
int k = 17;

int challenge(void) {
    for (int j=0; j<3; j++) {
        for (int i=1+j; i<4; i++) {
            printf("%d + %d\n", list[j], list[i]);
            if (list[j] + list[i] == k) {
                //return 1;
            }
        }
    }
    return 0;
}

int main(void) {
    int returnValue = 0;
    printf("Google coding challenge!\n");
    returnValue = challenge();
    printf("Return: %d", returnValue);
    return 0;
}