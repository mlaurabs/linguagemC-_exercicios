#include <iostream>

int main(){
    std::ios::sync_with_stdio(false);
    int valor, maior, posicao;
    for(int i = 0; i < 100; i++){
        std::cin >> valor;
        if (i == 0){
            maior = valor;
            posicao = i+1;
        }else{
            if (valor > maior){
                maior = valor;
                posicao = i+1;
            }
        }

    }
    std::cout << maior << '\n';
    std::cout << posicao << '\n';

}
    

   

