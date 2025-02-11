#include<stdio.h>
#include<stdlib.h>
int main()
{
    int dice,pos1=0,pos2=0,winc1,winc2,win=0,call;
    char p1[10],p2[10];
    srand(time(0));
    printf("\nWELCOME TO SNAKES AND LADDERS!\n");
    printf("\nPlayer 1,Enter your name:\n");
    scanf("%s",p1);
    printf("\nPlayer 2,Enter your name:\n");
    scanf("%s",p2);
    printf("\nPosition of %s is %d\n",p1,pos1);
    printf("\nPosition of %s is %d\n",p2,pos2);
    while(1){
        while(1){
                printf("\n%s's turn(Press 1 to roll the die)\n",p1);
                scanf("%d",&call);
                if(call==1){
                    dice=((rand()%6)+1);
                    winc1=pos1;
                    pos1=pos1+dice;
                    printf("\nYou rolled a %d!",dice);
                    if(pos1==13){
                        printf("\nYou found a Ladder at 13!\n");
                        pos1=42;
                        printf("\n%s's Position now is %d\n",p1,pos1);
                        if(dice==6){
                            printf("\nYou also rolled a 6 hence extra turn\n");
                            continue;
                        }
                        break;
                    }
                    else if(pos1==60){
                        printf("\nYou found a Ladder at 60!\n");
                        pos1=83;
                        printf("\n%s's Position now is %d\n",p1,pos1);
                        if(dice==6){
                            printf("\nYou also rolled a 6 hence extra turn\n");
                            continue;
                        }
                        break;
                    }
                    else if(pos1==70){
                        printf("\nYou found a Ladder at 70!\n");
                        pos1=93;
                        printf("\n%s's Position now is %d\n",p1,pos1);
                        if(dice==6){
                            printf("\nYou also rolled a 6 hence extra turn\n");
                            continue;
                        }
                        break;
                    }
                    else if(pos1==25){
                        printf("\nYou are bit by a Snake! at 25\n");
                        pos1=9;
                        printf("\n%s's Position now is %d\n",p1,pos1);
                        if(dice==6){
                            printf("\nYou also rolled a 6 hence extra turn\n");
                            continue;
                        }
                        break;
                    }
                    else if(pos1==65){
                        printf("\nYou are bit by a Snake! at 65\n");
                        pos1=40;
                        printf("\n%s's Position now is %d\n",p1,pos1);
                        if(dice==6){
                            printf("\nYou also rolled a 6 hence extra turn\n");
                            continue;
                        }
                        break;
                    }
                    else if(pos1==99){
                        printf("\nYou are bit by a Snake! at 99\n");
                        pos1=1;
                        printf("\n%s's Position now is %d\n",p1,pos1);
                        if(dice==6){
                            printf("\nYou also rolled a 6 hence extra turn\n");
                            continue;
                        }
                        break;
                    }
                    else if(pos1==100){
                        printf("\n%s has won the game!\n",p1);
                        win=1;
                        break;

                    }
                    else if((winc1+dice)>100){
                        printf("\nThe number exceeds 100 hence you remain at the same position\n");
                        pos1=winc1;
                        printf("\n%s's Position now is %d\n",p1,pos1);
                        if(dice==6){
                            printf("\nYou also rolled a 6 hence extra turn\n");
                            continue;
                        }
                        break;

                    }
                    else if(dice==6){
                        printf("\nAn extra turn given at %d",pos1);
                        call=0;
                        continue;

                    }
                    else{
                       printf("\n%s's Position now is %d\n",p1,pos1);
                       break;
                    }
                }
                else{
                        printf("\nInvalid call hence you miss a turn");
                        break;
                }
        }
        if(win==1){
            break;
        }
        while(1){
            printf("\n%s's turn(Press 1 to roll the die)\n",p2);
                scanf("%d",&call);
                if(call==1){
                    dice=(rand()%6)+1;
                    winc2=pos2;
                    pos2=pos2+dice;
                    printf("\nYou rolled a %d!",dice);
                    if(pos2==13){
                        printf("\nYou found a Ladder at 13!\n");
                        pos2=42;
                        printf("\n%s's Position now is %d\n",p2,pos2);
                        if(dice==6){
                            printf("\nYou also rolled a 6 hence extra turn\n");
                            continue;
                        }
                        break;
                    }
                    else if(pos2==60){
                        printf("\nYou found a Ladder at 60!\n");
                        pos2=83;
                        printf("\n%s's Position now is %d\n",p2,pos2);
                        if(dice==6){
                            printf("\nYou also rolled a 6 hence extra turn\n");
                            continue;
                        }
                        break;
                    }
                    else if(pos2==70){
                        printf("\nYou found a Ladder at 70!\n");
                        pos2=93;
                        printf("\n%s's Position now is %d\n",p2,pos2);
                        if(dice==6){
                            printf("\nYou also rolled a 6 hence extra turn\n");
                            continue;
                        }
                        break;
                    }
                    else if(pos2==25){
                        printf("\nYou are bit by a Snake! at 25\n");
                        pos2=9;
                        printf("\n%s's Position now is %d\n",p2,pos2);
                        if(dice==6){
                            printf("\nYou also rolled a 6 hence extra turn\n");
                            continue;
                        }
                        break;
                    }
                    else if(pos2==65){
                        printf("\nYou are bit by a Snake! at 65\n");
                        pos2=40;
                        printf("\n%s's Position now is %d\n",p2,pos2);
                        if(dice==6){
                            printf("\nYou also rolled a 6 hence extra turn\n");
                            continue;
                        }
                        break;
                    }
                    else if(pos2==99){
                        printf("\nYou are bit by a Snake! at 99\n");
                        pos2=1;
                        printf("\n%s's Position now is %d\n",p2,pos2);
                        if(dice==6){
                            printf("\nYou also rolled a 6 hence extra turn\n");
                            continue;
                        }
                        break;
                    }
                    else if(pos2==100){
                        printf("\n%s has won the game!\n",p2);
                        win=2;
                        break;

                    }
                    else if((winc2+dice)>100){
                        printf("\nThe number exceeds 100 hence you remain at the same position\n");
                        pos2=winc2;
                        printf("\n%s's Position now is %d\n",p2,pos2);
                        if(dice==6){
                            printf("\nYou also rolled a 6 hence extra turn\n");
                            continue;
                        }
                        break;

                    }
                    else if(dice==6){
                        printf("\An extra turn given at %d",pos2);
                        call=0;
                        continue;

                    }
                    else{
                       printf("\n%s's Position now is %d\n",p2,pos2);
                       break;
                    }
                }
                else{
                        printf("\nInvalid call hence you miss a turn\n");
                        break;
                }
        }
        if(win==2){
            break;
        }

    }
    return 0;

}
