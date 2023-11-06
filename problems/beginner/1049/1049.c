#include <stdio.h>
#include <string.h>

int main () {
    char buffer_1[100], buffer_2[100], buffer_3[100];

    scanf("%99s%99s%99s", buffer_1, buffer_2, buffer_3);

    if (strcmp(buffer_1, "vertebrado\0") == 0) {
        if(strcmp(buffer_2, "ave\0") == 0) {
            if(strcmp(buffer_3, "carnivoro\0") == 0) {
                printf("aguia\n");
            } else {
                printf("pomba\n");
            }
        } else {
            if(strcmp(buffer_3, "onivoro\0") == 0) {
                printf("homem\n");
            } else {
                printf("vaca\n");
            }
        }
    } else {
        if(strcmp(buffer_2, "inseto\0") == 0) {
            if(strcmp(buffer_3, "hematofago\0") == 0) {
                printf("pulga\n");
            } else {
                printf("lagarta\n");
            }
        } else {
            if(strcmp(buffer_3, "hematofago\0") == 0) {
                printf("sanguessuga\n");
            } else {
                printf("minhoca\n");
            }
        }
    }

    return 0;
}
