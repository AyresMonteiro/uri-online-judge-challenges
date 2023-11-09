#include <stdio.h>

int main () {
    int n, greater, position;
        
    scanf("%i", &n);

    greater = n;
    position = 1;

    for(int i = 2; i <= 100; i++) {
        scanf("%i", &n);

        if (n > greater) {
           greater = n;
           position = i; 
        }
    }

    printf("%i\n", greater); 
    printf("%i\n", position); 

    return 0;
}
