#include <iostream>


int Policz(int a, int b){
    return a / b; //Zmiana dodawania na dzielenie
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "W trzecim branchu; 4 / 2 = " << Policz(4, 2);
    return 0;
}
