#include <stdio.h>

int main () {
    int n;

    scanf("%i", &n);

    for (int i = 1; i <= n; i++) {
        printf("%i %i %i\n",
            i,
            i * i,
            i * i * i
        );
        
        printf("%i %i %i\n",
            i,
            i * i + 1,
            i * i * i + 1
        );
    }

    return 0;
}
