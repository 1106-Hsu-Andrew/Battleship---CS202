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

bool checkSunk(Ship s){
    if(s.getHits() >= s.getLength()){
        return 1; 
    }else{
        return 0;
    }
}

bool checkCollision(Board b, Ship s){
    int startX = s.getStart().getStartX();
    int startY = s.getStart().getStartY();

    if(s.getOrientation() == 'V'){
        for(int i = startX; i < startX + s.getLength(); i++){
            if(b.getGrid()[i - 1][startY - 1] != '-'){
                return true;
            }
        }
    } else {
        for(int i = startY; i < startY + s.getLength(); i++){
            if(b.getGrid()[startX - 1][i - 1] != '-'){
                return true;
            }
        }
    }
    return false;
}
bool boardCollision(Ship shipArray[], Board& gameBoard){
    int x, y;
    char orientation;

    // Getting the x, y, and orientation of each ship
    for(int i = 0; i < 5; i++){
        Coordinate location = Coordinate();
        do {
            // Prompt for ship placement
            cout << shipArray[i].getName() << ": ";
            cin >> x >> y >> orientation;

            // Set start location and orientation for the ship
            location.setStartX(x);
            location.setStartY(y);

            shipArray[i].setStart(location);
            shipArray[i].setOrientation(orientation);

            // Check for collision
            if(checkCollision(gameBoard, shipArray[i])){
                cout << "Collision detected! Please choose a different location." << endl;
            }
        }while(checkCollision(gameBoard, shipArray[i])); // Repeat if there's a collision

    // Place the ship on the game board
    placeShip(shipArray[i], gameBoard);
    cout << gameBoard;
    }
}

// Function to randomly place ships on the game board
void randomizeShips(Board gameBoard) {
    srand(time(NULL)); // Seed the random number generator

    Ship* shipArray = new Ship[5];

    // Define ships and their lengths
    Ship Carrier = Ship();
    Carrier.setName("Carrier");
    Carrier.setLength(5);

    Ship Battleship = Ship();
    Battleship.setName("Battleship");
    Battleship.setLength(4);

    Ship Destroyer = Ship();
    Destroyer.setName("Destroyer");
    Destroyer.setLength(3);

    Ship Submarine = Ship();
    Submarine.setName("Submarine");
    Submarine.setLength(3);

    Ship PatrolBoat = Ship();
    PatrolBoat.setName("Patrol Boat");
    PatrolBoat.setLength(2);

    shipArray[0] = Carrier;
    shipArray[1] = Battleship;
    shipArray[2] = Destroyer;
    shipArray[3] = Submarine;
    shipArray[4] = PatrolBoat;

    for (int i = 0; i < 5; i++) {
        int x, y;
        char orientation = rand() % 2 == 0 ? 'H' : 'V'; // randomly choose horizontal or vertical

        // Randomly generate starting coordinates within the boundaries
        x = (rand() % 9) + 1;
        y = (rand() % 9) + 1;

        shipArray[i].setStart(Coordinate(x, y));
        shipArray[i].setOrientation(orientation);

        // Check for collision and generate new coordinates if needed
        while (checkCollision(gameBoard, shipArray[i])) {
            // If there's a collision, generate new starting coordinates
            x = (rand() % 9) + 1;
            y = (rand() % 9) + 1;
            shipArray[i].setStart(Coordinate(x, y));
        }

        // Place the ship on the game board
        placeShip(shipArray[i], gameBoard);
    }
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
        for(int i = x; i < s.getLength() + x; i++){
            b.getGrid()[i - 1][y - 1] = s.getName()[0];

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
    cout << "Type the values in this order: x (1 - 10), y (1 - 10), orientation (H or V), and separate the values by spaces. " << endl << endl;
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

void placeAttack(Board& opponentBoard) {
    int x, y;
    cout << "Enter the coordinates to place your attack (x and y separated by a space): ";
    cin >> x >> y;

    // Check if the coordinates are valid
    if (x < 1 || x > 10 || y < 1 || y > 10) {
        cout << "Invalid coordinates. Please enter coordinates between 1 and 10." << endl;
        return;
    }

    // Convert to zero-based indexing
    x--; 
    y--;

    // Check if the attack location has already been attacked
    if (opponentBoard.getGrid()[x][y] != '-') {
        cout << "You have already attacked this location. Please choose another one." << endl;
        return;
    }

    // Mark the attack on the opponent's board
    if (opponentBoard.getGrid()[x][y] == 'C' || opponentBoard.getGrid()[x][y] == 'B' || opponentBoard.getGrid()[x][y] == 'D' || opponentBoard.getGrid()[x][y] == 'S' || opponentBoard.getGrid()[x][y] == 'P') {
        opponentBoard.getGrid()[x][y] = 'X'; // 'X' represents a hit
        cout << "Hit!" << endl;
    } else {
        opponentBoard.getGrid()[x][y] = 'O'; // 'O' represents a miss
        cout << "Miss!" << endl;
    }
}

bool checkHit(const Board& opponentBoard, int x, int y) {
    // Check if the coordinates represent a hit
    return opponentBoard.getGrid()[x][y] == 'X';
}

