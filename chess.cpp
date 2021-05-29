#include <iostream>
#include <string>

class Player {
    public:
        Player() {}
        Player(std::string name, int color) : name{name}, color{color} {}

    private:
        std::string name{};
        int color{};
};

class Piece {
    public:
        Piece() {}

    private:
};

class Board {
    public:
        Board() {}

    private:
};

class Game {
    public:
        Game() {}

    private:
        Player *playerWhite{};
        Player *playerBlack{};
        Board gameBoard = Board();
        int Turn{};
        std::string winner{};
};

int main () {

}