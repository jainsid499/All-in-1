#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void number_guessing(){
    int num,guess,nguess=1;
    srand(time(0));
    num = rand()%100+1;
    printf("guess no. betweeen 1 to 100\n");
    do{
        scanf("%d",&guess);
        if (guess>num)
            printf("lower no.\n");
        else if(guess<num)
            printf("higher no.\n");
        else
            printf("you guessed in %d attempts\n",nguess);
        nguess++;
    } while (guess != num);
    return 0;
}
void rock_paper_scissor(){
    printf("ho jai");
    return 0;
}
int main(){
    int choice;
    printf("CHOOSE GAME \n1. NUMBER GUESSING \n2. ROCK PAPER SCISSOR \nGIVE CHOICE\n");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            printf("******NUMBER GUESSING******\n");
            number_guessing();
            break;
        case 2:
            printf("******ROCK PAPER SCISSOR******\n");
            rock_paper_scissor();
            break;
        default:
            printf("invalid choice\n");
    }
            
    return 0;
}