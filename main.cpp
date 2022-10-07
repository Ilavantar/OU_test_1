#include <iostream>

//Nowa metoda
int Policz(int a, int b){
    return a + b;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "W pierwszym branchu; 2 + 3 = " << Policz(2, 3);
    return 0;
}
