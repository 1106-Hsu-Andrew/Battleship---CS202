#include "helper.h"
void placeAttack(){
    do{
        int x, y
        attackLocation = Coordinate();
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
    do{
        int x, y
        shipLocation = Coordinate();
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

}

void updateBoard(){

}

bool checkCollision(){

}

int playGame(){

}
