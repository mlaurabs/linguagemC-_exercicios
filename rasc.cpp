#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);

    int idade, num;
    std::cout << "Hello World!\n";
    std::cout << "Digite sua idade e um num: ";
    std::cin >> idade >> num;
    std::cout << "Sua idade: " << idade + num << '\n';

}

