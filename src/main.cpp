#include "GameManager.hpp"

int main() {
    GameManager chess = GameManager();
    chess.startChess();
    std::cout << "CheckMate!" << std::endl;
}
