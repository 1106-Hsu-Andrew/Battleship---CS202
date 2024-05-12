#include "helpers.h"
void placeAttack(){
    int x, y;
    Coordinate attackLocation = Coordinate();
    do{
        cout << "Enter a coordinate to place an attack with the x and y values separated by a space: " << endl;
        cin >> x;
        cin >> y; 
    }while(x < 0 || x > 10 || y < 0 || y > 10);
    attackLocation.setStartX(x);
    attackLocation.setStartY(y);
}

bool checkHit(){

}

bool addGrid(Ship s, Board b){
    int x, y;
    Coordinate shipLocation = Coordinate();
    do{
        cout << "Enter a coordinate to place your ship with the x and y values separated by a space: " << endl;
        cin >> x;
        cin >> y;
    }while(x < 0 || x > 10 || y < 0 || y > 10);
    shipLocation.setStartX(x);
    shipLocation.setStartY(y);

    do{
        cout << "Enter the orientation (V)ertical or (H)orizontal " << endl;
    }while(orientation != 'V' || orientation != 'H')

    b.set

}

bool removeGrid(Coordinate){

}

bool checkWin(){

}

bool checkSunk(){
    if(hits >= shipType.getLength()){
        return 1; 
    }else{
        return 0;
    }
}

void updateBoard(){

}

bool checkCollision(){

}

int playGame(){

}

void showBoard(char* board[]){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cout << board[i][j] << " ";
        }
    }
}

void clearBoard(char* board[]){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            board[i][j] = "";
        }
    }

}