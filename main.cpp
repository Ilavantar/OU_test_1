#include <iostream>


int Policz(int a, int b){
    return a - b; // Zmiana dodawania na odejmowanie
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "W trzecim branchu; 2 - 3 = " << Policz(2, 3);
    return 0;
}
