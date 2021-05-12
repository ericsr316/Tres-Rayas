#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

void printBoard(char board[][3],int,int);
void chooseLetter();
void write(char x,int r,int c,int t);
void printBoard(char board[][3],int,int);
void turn(int t);
void checkVictory(char x,int r,int c,int t);
const int row = 3;
const int column = 3;
char letter = 'X';
int r = 0;
int c = 0;

char board[row][column]  = {
                {'*','*','*'},
                {'*','*','*'},
                {'*','*','*'}
                };


void juego(){
int r;
int c;
int check = false;
do{
std::cout<<"Gato jueguito\n";
printBoard(board,row,column);
std::cout<<"Ingrese las coordenadas en las que desea fichar\n";
do{
std::cin>>r;
std::cin>>c;
if(r>=0 && r<=2 && c>=0 && c<=2){
    check = true;
}
else{
    std::cout<<"Coordanadas invalidas\n";
}
}while(check = false);
write(letter,r,c,1);
write(letter,rand()%2,rand()%2,2);
printBoard(board,row,column);
checkVictory(letter,r,c,1);
checkVictory(letter,r,c,2);
system("cls");
}while(true);
}


void turn(int t){
    if(t==1){
        letter = 'X';
    }

    else
        letter = 'O';
}

void write(char x,int r,int c, int t){

    turn(t);

    for(int i = 0;i < row;i++){
        for(int j = 0; j < column; j++){
            if(board[i][j]=='*' && i == r && j == c){
              board[i][j] = letter;
            }
        }
    }
    system("cls");
}

void checkVictory(char x, int r, int c,int t){
  turn(t);
  for(int i = 0; i < row;i++){
    for(int j = 0; j < column;j++){
        switch(i){
        case 0:
        if(board[i][j]==letter && board[i+1][j]==letter && board[i+2][j]==letter){
            std::cout<<"Ganaste\n";
            exit(0);
        }

        if(board[i][j] == letter && board[i][j+1]==letter && board[i][j+2]== letter){
            std::cout<<"Ganaste\n";
            exit(0);
        }

        if(board[i][j] == letter && board[i+1][j+1] == letter && board[i+2][j+2] == letter){
            std::cout<<"Ganaste\n";
            exit(0);
        }

        break;

        case 1:
        if(board[i][j] == letter && board[i][j+1] == letter && board[i][j+2]== letter){
            std::cout<<"Ganaste\n";
            exit(0);
        }

        if(board[i][j] == letter && board[i+1][j+1] == letter && board[i+2][j+2] == letter){
            std::cout<<"Ganaste\n";
            exit(0);
        }
        break;

        case 2:
          if(board[i][j] == letter && board[i][j+1] == letter && board[i][j+2]== letter){
            std::cout<<"Ganaste\n";
            exit(0);
        }

        if(board[i][j] == letter && board[i+1][j+1] == letter && board[i+2][j+2] == letter){
            std::cout<<"Ganaste\n";
            exit(0);
        }
            break;
     }
    }
  }
}

void printBoard(char board[][3],int,int){
for(int i = 0; i < row; i++){
    for(int j = 0; j < column; j++){
        std::cout<<board[i][j]<<"   ";
        }
            std::cout<<"\n\n";
    }
}

#endif // GAME_H_INCLUDED
