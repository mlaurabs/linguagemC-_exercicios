#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    int n, a, b, c;
    cin >> n;
    for(int i=0; i < n; i++){
        if(i == 0){
            c = 0;
            cout << c << " ";
        }
        else if(i == 1){
            c = 1;
            cout << c << " ";
        }else if(i == 2){
            a = 0;
            b = 1;
            c = a+b;
            cout << c << " ";
        }
        else{
            a = b;
            b = c;
            c = a+b;
            if(i+1 == n){
                cout << c << '\n';
            }else{
                cout << c << " ";
            }

        }
        
    }

}