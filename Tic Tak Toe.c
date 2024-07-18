//this Tic Tac Toe is build for fun

#include<stdio.h>
#include<conio.h>
char square[10]={'0','1','2','3','4','5','6','7','8','9'};
int checkwin()
{int player = 1,i,choice;
    char mark;
    do
    {
      board();
      player=(player%2) ? 1 : 2;
      printf("player%d , enter a number:",player);
      scanf("%d",&choice);
      mark =(player==1)?'x':'0';
             if(choice==1 && square [1]=='1') square[1]=mark;
        else if(choice==2 && square [2]=='2') square[2]=mark;
        else if(choice==3 && square [3]=='3') square[3]=mark;
        else if(choice==4 && square [4]=='4') square[4]=mark;
        else if(choice==5 && square [5]=='5') square[5]=mark;
        else if(choice==6 && square [6]=='6') square[6]=mark;
        else if(choice==7 && square [7]=='7') square[7]=mark;
        else if(choice==8 && square [8]=='8') square[8]=mark;
        else if(choice==9 && square [9]=='9') square[9]=mark;
        else
            {
            printf("invalid move");
            player --;
            getch();
        }
        i= checkwin();
        player ++;
    }
    while(1 == -1);
    board();
    if(i==1)
        printf("\a player %d win",--player);
    else
        printf("\a Game draw ");
    getch();
    return 0;
}

int checkwin()
{
if(square[1] == square[2] && square[2] == square[3])
    return 1;
if(square[4] == square[5] && square[5] == square[6])
    return 1;
if(square[7] == square[8] && square[8] == square[9])
    return 1;
if(square[1] == square[4] && square[4] == square[7])
    return 1;
if(square[2] == square[5] && square[5] == square[8])
    return 1;
if(square[3] == square[6] && square[6] == square[9])
    return 1;
if(square[1] == square[5] && square[5] == square[9])
    return 1;
if(square[3] == square[5] && square[5] == square[7])
    return 1;
else if(square[1]!= '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square [5] != '5' &&square[6]!= '6' && square[7] != '7' && square [8] != '8' && square [9] != '9')
    return 0;
else
        return -1;
}
void board(){
system ("Cls");
printf("\n\n\tTic tac toe \n\n");
printf("player 1(x)- player 2(0)\n\n\n");
printf("     |      |  \n ");
printf("%c|%c|%c\n",square[1],square[2],square[3]);
printf("-----|------|--------\n");
printf("     |      |        \n");
printf(" %C | %C| %C \n ,square[4],square[5],square,[6]");
printf("-----|------|--------\n");
printf("-----|------|--------\n");
printf("     |      |        \n");
printf("%C|%C|%C\n ,square[7],square[8],square[9]");
printf("     |      |        \n");
  }


