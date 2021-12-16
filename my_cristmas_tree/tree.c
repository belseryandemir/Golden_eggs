#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    int n = atoi(argv[1]);
    int star = 0;
    int var = (n - 1)%2;
    if (var == 0){
        star = ((n -1) * 5) + 1;
    }
    else{
        star = (n - 1) * 5;
    }
    if((n-1) > 2){
        star = star + (n-3)*2;
    }
    if((n-1) > 6){
        star = star + (n-6)*4;
    }
    int maxstar = star + ((n + 2) * 2);
    int line = 4;
    for (int i = 0; i < n; i++){
        if (i%2 == 0){
            star = (i * 5) + 1;
        }
        else{
            star = i * 5;
        }

        if (i > 2){
            star = star +(i - 2) * 2;
        }
        if (i > 5){
            star = star +(i - 5) * 4;
        }
        if (i == 5){
            star +=2;
        }

        for (int k  = 1; k <= line; k++){
            int space = (maxstar / 2) - (star / 2);
            for (int j = 0; j < space; j++){
                printf(" ");
            }
            for (int j = 0; j < star; j++){
                printf("*");
            }
            printf("\n");
            star = star + 2;
        }
        line++;
    }
    for (int i = 0; i < n; i++){
        int space = (maxstar / 2) - ((n-1) / 2);
            for (int j = 0; j < space; j++){
                char spacex =' ';
                printf("%c", spacex);
            }
            for (int j = 0; j < n; j++){
                printf("|");
            }
            printf("\n");

    }

}