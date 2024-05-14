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

bool checkCollision(Board b, Ship s){
    if(s.getStart().getStartX()){
        
    }
}

int playGame(){

}

void displayBoard(Board aB, Board gB){
    cout << "         ====ATTACK BOARD====" << endl;
    cout << aB;
    cout << "         ====GAME BOARD====" << endl;
    cout << gB;
}

void placeShip(Ship s, Board b){
    int x = s.getStart().getStartX();
    int y = s.getStart().getStartY();
    if(s.getOrientation() == 'V'){
        cout << "X " << x << "Y " << y << endl;
        for(int i = x; i < s.getLength() + x; i++){
            b.getGrid()[i - 1][y - 1] = s.getName()[0];
            cout << "I " << i << "Y " << y << endl;

        }
    }
    else{
        for(int i = x; i < s.getLength() + x; i++){
            b.getGrid()[x - 1][i - 1]  = s.getName()[0];
        }
    }
}

void setGrid(Board b){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            b.getGrid()[i][j] = '-';
        }
    }
}

string displayWelcome(){   
    string userName;

    system("clear");
    cout << "        WELCOME TO BATTLESHIP!" << endl << endl;
    cout << "Enter your name: ";
    cin >> userName;

    return userName;
}

void displayShipPrompt(string n){
    cout << "Hello " << n << " please choose the location of your five ships and their orientation." << endl;
    cout << "Type the values in this order: x, y, orientation, and separate the values by spaces. " << endl << endl;
}

ostream& operator<<(ostream& o, const Board& rhs){
    for(int k = 0; k < 9; k++){
    o << k + 1 << " | ";
    }
    o << "10|"<< endl;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
                o << " " << rhs.getGrid()[i][j] << " |";
        }
        o << i + 1 << endl;
    }
    o << endl;   
    return o;
}