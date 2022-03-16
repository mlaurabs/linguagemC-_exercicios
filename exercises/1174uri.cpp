/*https://www.beecrowd.com.br/judge/pt/problems/view/1174*/

#include <iostream>
using namespace std;
#define TAM 5
int main(){
    float A[TAM], n;
    for(int i=0; i < TAM ; i++){
        cin >> n;
        A[i] = n;
    }
    for(int i=0; i < TAM ; i++){
        if(A[i] <= 10.0){
            std::cout.precision(1);
            std::cout << "A[" << i << "]" << " = " << std::fixed << A[i] << '\n';
            
        
        
        }
    }
}

