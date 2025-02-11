#include<stdio.h>
int main()
{
    char choice;
    int a,i,j,k=1,e,f,x,y,w1=0,w2=0,match,check[9]={0};
    char board[3][3];
    printf("WELCOME TO TIC-TAC-TOE \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",k++);
        }
        printf("\n");
    }
    printf("\n Enter the position to place your entry \n");
    while(1){
        printf("Player 1,Would you like to go 'X' or 'O'? \n:");
        scanf("%c",&choice);
        if(choice=='X'){
            a=1;
            printf("Player 1 is X and Player 2 is O \n");
            break;
        }
        else if(choice=='O'){
            a=2;
            printf("Player 1 is O and Player 2 is X \n");
            break;
        }
        else{
            printf("Invalid Choice! \n");
            continue;

        }
    }
    switch(a){
    case 1:
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                board[i][j]='.';
                printf("%c ",board[i][j]);
            }
            printf("\n");
        }
        while(1){
            printf("Player 1, Enter the position you would like to play:");
            scanf("%d",&e);
            if(check[e-1]==1){
                    printf("This position has already been played\n");
                    for(i=0;i<3;i++){
                        for(j=0;j<3;j++){
                            board[i][j]='.';
                            printf("%c ",board[i][j]);
                        }
                        printf("\n");
                    }
                    for(i=0;i<9;i++){
                        check[i]=0;
                    }
                    continue;

            }
            else if(e>0 && e<4){
                x=0;
                y=e-1;
                for(i=0;i<3;i++){
                    for(j=0;j<3;j++){
                        if(i==x && j==y){
                            board[i][j]='X';
                        }
                    }
                }

                check[e-1]=1;
            }
            else if(e>3 && e<7){
                x=1;
                y=e-4;
                for(i=0;i<3;i++){
                    for(j=0;j<3;j++){
                        if(i==x && j==y){
                            board[i][j]='X';
                        }
                    }
                }
                check[e-1]=1;
            }
            else if(e>6 && e<10){
                x=2;
                y=e-7;
                for(i=0;i<3;i++){
                    for(j=0;j<3;j++){
                        if(i==x && j==y){
                            board[i][j]='X';
                        }
                    }
                }
                check[e-1]=1;
            }
            else{
                printf("Invalid entry\n");
                for(i=0;i<3;i++){
                        for(j=0;j<3;j++){
                            board[i][j]='.';
                            printf("%c ",board[i][j]);
                        }
                        printf("\n");
                }
                for(i=0;i<9;i++){
                        check[i]=0;
                }
                continue;
            }
            while(1){
                for(i=0;i<3;i++){
                    if(board[i][0]=='X' && board[i][1]=='X' && board[i][2]=='X'){
                        w1=1;
                    }
                }
                for(i=0;i<3;i++){
                    if(board[0][i]=='X' && board[1][i]=='X' && board[2][i]=='X'){
                        w1=1;
                    }
                }
                for(i=0;i<3;i++){
                    if(board[0][0]=='X' && board[1][1]=='X' && board[2][2]=='X'){
                        w1=1;
                    }
                }
                for(i=0;i<3;i++){
                    if(board[0][2]=='X' && board[1][1]=='X' && board[2][0]=='X'){
                        w1=1;
                    }
                }
                break;

            }
            if(w1==1){
                    printf("\nPLAYER 1 HAS WON THIS GAME\n");
                    for(i=0;i<3;i++){
                        for(j=0;j<3;j++){
                            printf("%c ",board[i][j]);
                        }
                        printf("\n");
                    }
                    break;
            }
            for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                    printf("%c ",board[i][j]);
                }
                printf("\n");
            }
            printf("Player 2, Enter the position you would like to play:");
            scanf("%d",&f);
            if(check[f-1]==1){
                    printf("This position has already been played\n");
                    for(i=0;i<3;i++){
                        for(j=0;j<3;j++){
                            board[i][j]='.';
                            printf("%c ",board[i][j]);
                        }
                        printf("\n");
                    }
                    for(i=0;i<9;i++){
                        check[i]=0;
                    }
                    continue;

            }
            else if(f>0 && f<4){
                x=0;
                y=f-1;
                for(i=0;i<3;i++){
                    for(j=0;j<3;j++){
                        if(i==x && j==y){
                            board[i][j]='O';
                        }
                    }
                }
                check[f-1]=1;
            }
            else if(f>3 && f<7){
                x=1;
                y=f-4;
                for(i=0;i<3;i++){
                    for(j=0;j<3;j++){
                        if(i==x && j==y){
                            board[i][j]='O';
                        }
                    }
                }
                check[e-1]=1;
            }
            else if(f>6 && f<10){
                x=2;
                y=f-7;
                for(i=0;i<3;i++){
                    for(j=0;j<3;j++){
                        if(i==x && j==y){
                            board[i][j]='O';
                        }
                    }
                }
                check[f-1]=1;
            }
            else{
                printf("Invalid entry\n");
                for(i=0;i<3;i++){
                        for(j=0;j<3;j++){
                            board[i][j]='.';
                            printf("%c ",board[i][j]);
                        }
                        printf("\n");
                }
                for(i=0;i<9;i++){
                    check[i]=0;
                }
                continue;
            }
            while(1){
                for(i=0;i<3;i++){
                    if(board[i][0]=='O' && board[i][1]=='O' && board[i][2]=='O'){
                        w2=1;
                    }
                }
                for(i=0;i<3;i++){
                    if(board[0][i]=='O' && board[1][i]=='O' && board[2][i]=='O'){
                        w2=1;
                    }
                }
                for(i=0;i<3;i++){
                    if(board[0][0]=='O' && board[1][1]=='O' && board[2][2]=='O'){
                        w2=1;
                    }
                }
                for(i=0;i<3;i++){
                    if(board[0][2]=='O' && board[1][1]=='O' && board[2][0]=='O'){
                        w2=1;
                    }
                }
                break;

            }
            if(w2==1){
                    printf("\nPLAYER 2 HAS WON THIS GAME\n");
                    for(i=0;i<3;i++){
                        for(j=0;j<3;j++){
                            printf("%c ",board[i][j]);
                        }
                        printf("\n");
                    }
                    break;
            }
            for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                    printf("%c ",board[i][j]);
                }
                printf("\n");
            }

        }
        break;

    case 2:
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                board[i][j]='.';
                printf("%c ",board[i][j]);
            }
            printf("\n");
        }
        while(1){
            printf("Player 1, Enter the position you would like to play:");
            scanf("%d",&e);
            if(check[e-1]==1){
                    printf("This position has already been played\n");
                    for(i=0;i<3;i++){
                        for(j=0;j<3;j++){
                            board[i][j]='.';
                            printf("%c ",board[i][j]);
                        }
                        printf("\n");
                    }
                    for(i=0;i<9;i++){
                        check[i]=0;
                    }
                    continue;

            }
            else if(e>0 && e<4){
                x=0;
                y=e-1;
                for(i=0;i<3;i++){
                    for(j=0;j<3;j++){
                        if(i==x && j==y){
                            board[i][j]='O';
                        }
                    }
                }
                check[e-1]=1;
            }
            else if(e>3 && e<7){
                x=1;
                y=e-4;
                for(i=0;i<3;i++){
                    for(j=0;j<3;j++){
                        if(i==x && j==y){
                            board[i][j]='O';
                        }
                    }
                }
                check[e-1]=1;
            }
            else if(e>6 && e<10){
                x=2;
                y=e-7;
                for(i=0;i<3;i++){
                    for(j=0;j<3;j++){
                        if(i==x && j==y){
                            board[i][j]='O';
                        }
                    }
                }
                check[e-1]=1;
            }
            else{
                printf("Invalid entry\n");
                for(i=0;i<3;i++){
                        for(j=0;j<3;j++){
                            board[i][j]='.';
                            printf("%c ",board[i][j]);
                        }
                        printf("\n");
                }
                for(i=0;i<9;i++){
                    check[i]=0;
                }
                continue;
            }
            while(1){
                for(i=0;i<3;i++){
                    if(board[i][0]=='O' && board[i][1]=='O' && board[i][2]=='O'){
                        w1=1;
                    }
                }
                for(i=0;i<3;i++){
                    if(board[0][i]=='O' && board[1][i]=='O' && board[2][i]=='O'){
                        w1=1;
                    }
                }
                for(i=0;i<3;i++){
                    if(board[0][0]=='O' && board[1][1]=='O' && board[2][2]=='O'){
                        w1=1;
                    }
                }
                for(i=0;i<3;i++){
                    if(board[0][2]=='O' && board[1][1]=='O' && board[2][0]=='O'){
                        w1=1;
                    }
                }
                break;

            }
            if(w1==1){
                    printf("\nPLAYER 1 HAS WON THIS GAME\n");
                    for(i=0;i<3;i++){
                        for(j=0;j<3;j++){
                            printf("%c ",board[i][j]);
                        }
                        printf("\n");
                    }
                    break;
            }
            for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                    printf("%c ",board[i][j]);
                }
                printf("\n");
            }
            printf("Player 2, Enter the position you would like to play:");
            scanf("%d",&f);
            if(check[f-1]==1){
                    printf("This position has already been played\n");
                    for(i=0;i<3;i++){
                        for(j=0;j<3;j++){
                            board[i][j]='.';
                            printf("%c ",board[i][j]);
                        }
                        printf("\n");
                    }
                    for(i=0;i<9;i++){
                        check[i]=0;
                    }
                    continue;

            }
            else if(f>0 && f<4){
                x=0;
                y=f-1;
                for(i=0;i<3;i++){
                    for(j=0;j<3;j++){
                        if(i==x && j==y){
                            board[i][j]='X';
                        }
                    }
                }
                check[f-1]=1;
            }
            else if(f>3 && f<7){
                x=1;
                y=f-4;
                for(i=0;i<3;i++){
                    for(j=0;j<3;j++){
                        if(i==x && j==y){
                            board[i][j]='X';
                        }
                    }
                }
                check[f-1]=1;
            }
            else if(f>6 && f<10){
                x=2;
                y=f-7;
                for(i=0;i<3;i++){
                    for(j=0;j<3;j++){
                        if(i==x && j==y){
                            board[i][j]='X';
                        }
                    }
                }
                check[f-1]=1;
            }
            else{
                printf("Invalid entry\n");
                for(i=0;i<3;i++){
                        for(j=0;j<3;j++){
                            board[i][j]='.';
                            printf("%c ",board[i][j]);
                        }
                        printf("\n");
                }
                for(i=0;i<9;i++){
                    check[i]=0;
                }
                continue;
            }
            while(1){
                for(i=0;i<3;i++){
                    if(board[i][0]=='X' && board[i][1]=='X' && board[i][2]=='X'){
                        w2=1;
                    }
                }
                for(i=0;i<3;i++){
                    if(board[0][i]=='X' && board[1][i]=='X' && board[2][i]=='X'){
                        w2=1;
                    }
                }
                for(i=0;i<3;i++){
                    if(board[0][0]=='X' && board[1][1]=='X' && board[2][2]=='X'){
                        w2=1;
                    }
                }
                for(i=0;i<3;i++){
                    if(board[0][2]=='X' && board[1][1]=='X' && board[2][0]=='X'){
                        w2=1;
                    }
                }
                break;

            }
            if(w2==1){
                    printf("\n PLAYER 2 HAS WON THIS GAME \n");
                    for(i=0;i<3;i++){
                        for(j=0;j<3;j++){
                            printf("%c ",board[i][j]);
                        }
                        printf("\n");
                    }
                    break;
            }
            for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                    printf("%c ",board[i][j]);
                }
                printf("\n");
            }

        }
        break;


    }
    return 0;

}
