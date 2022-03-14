#include <iostream>

int main(){
    std::ios::sync_with_stdio(false);

    int code1, code2, num1, num2;
    float valor1, valor2, soma;
    std::cin >> code1 >> num1 >> valor1;
    std::cin >> code2 >> num2 >> valor2;
    soma = (num1*valor1) + (num2*valor2);
    std::fixed;
    std::cout.precision(2);
    std::cout << "Valor a pagar: R$ " << soma << '\n';


}