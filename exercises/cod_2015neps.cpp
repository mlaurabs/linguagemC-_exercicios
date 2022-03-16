/*https://neps.academy/br/exercise/47*/

#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    int n, nat;
    cin >> n;
    int vetor[10000];
    for(int i=0; i < n; i++){
        cin >> vetor[i];
    }
    for(int i=0; i < n-2; i++){
            if(vetor[i] == 1 && vetor[i + 1] == 0 && vetor[i + 2] == 0){
               nat++;
            }else{
                continue;
            }
        }
    cout << nat;

    }