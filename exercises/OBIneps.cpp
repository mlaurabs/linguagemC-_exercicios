#include <iostream>
using namespace std;
int main(){
    std::ios::sync_with_stdio(false);
    int n, p, x, y, i=0, cont=0;
    cin >> n >> p;
    while(i < n){
        cin >> x >> y;
        if (x + y >= p){
            cont++;
        }
        i++;
    }
    cout << cont;

    
}