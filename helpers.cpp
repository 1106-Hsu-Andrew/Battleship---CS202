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
    char orientation;
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
        cin >> orientation;
    }while(orientation != 'V' || orientation != 'H');
}

bool removeGrid(Coordinate){

}

bool checkWin(){

}

bool checkSunk(Ship s){
    if(s.getHits() >= s.getLength()){
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

void clearBoard(Board b){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            b.getGrid()[i] = 0;
        }
    }

}