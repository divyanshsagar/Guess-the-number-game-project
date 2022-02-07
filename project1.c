#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number,guess,attempts=1;
    srand(time(0));
    number=rand()%100 + 1;
    printf("%d\n",number);
    do{
        printf("GUESS THE NUMBER\n");
        scanf("%d\n",&guess);
        if(guess<number){
            printf("ENTERED NUMBER IS SMALLER\n");
        }
        else if(guess>number){
            printf("ENTERED NUMBER IS BIGGER\n");
        }
        else if(guess = number){
            printf("HOORAY YOU GUESSED THE NUMBER IN %d ATTEMPTS\n",attempts);
        }
        attempts++;
    }while(guess != number);
    return 0;
}