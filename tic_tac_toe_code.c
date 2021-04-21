#include <stdlib.h>
#include<stdio.h>
char box[10] = {'o','1','2','3','4','5','6','7','8','9'};
int find_Winner();
void drawBoard();

void main(){
	int player = 1, i ,box_num;
	char mark;
	do {
		drawBoard();
		player = (player % 2) ? 1 : 2;
		printf("Player %d, enter the box choice : ",player);
		scanf("%d",&box_num);
		mark = (player == 1) ? 'X' : 'O';
		if(box_num == 1 && box[1] == '1')
			box[1] = mark;
		else if(box_num == 2 && box[2] == '2')
			box[2] = mark;
			else if(box_num == 3 && box[3] == '3')
				box[3] = mark;
			else if(box_num == 4 && box[4] == '4')
				box[4] = mark;
			else if(box_num == 5 && box[5] == '5')
				box[5] = mark;
			else if(box_num == 6 && box[6] == '6')
				box[6] = mark;
			else if(box_num == 7 && box[7] == '7')
				box[7] = mark;
			else if(box_num == 8 && box[8] == '8')
				box[8] = mark;
			else if(box_num == 9 && box[9] == '9')
				box[9] = mark;
    		else 
			{
					printf("Invalid option !");
					player--;
			}
		    i = find_Winner();
		    player++;	
		
	}while(i == -1);
	
	drawBoard();
	if(i==1){
		printf("Player %d won",--player);
	}
	else {
		printf("Game draw");
	}
}
int find_Winner(){
	if(box[1] == box[2] && box[2] == box[3])
		return 1;
	else if (box[4] == box[5] && box[5] == box[6])
		return 1;
	else if(box[7] == box[8] && box[8] == box[9])
		return 1;
	else if(box[1] == box[4] &&box[4] == box[7])
		return 1;
	else if(box[2] == box[5] && box[5] ==box[8])
		return 1;
	else if(box[3] == box[6] &&box[6] ==box[9])
		return 1;
	else if(box[1] == box[5] && box[5] == box[9])
		return 1;
	else if(box[3] == box[5] && box[5] == box[7])
		return 1;
	else if(box[1] != '1' && box[2] != '2' &&box[3] != '3' && box[4] !='4' && box[5] != '5' && box[6] != '6' && box[7] != '7' && box[8] != '8' && box[9] != '9')
		return 0;
	else 
		return -1;	
}

void drawBoard(){
	printf("\n\n\t Tic Tac Toe \n\n");
	printf("Player1 (X) - Player2 (O) \n\n\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",box[1],box[2],box[3]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",box[4],box[5],box[6]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",box[7],box[8],box[9]);
	printf("     |     |     \n");	
}
