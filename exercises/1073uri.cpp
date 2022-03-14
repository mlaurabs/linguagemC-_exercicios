#include <iostream>
using namespace std;
int main(){
    std::ios::sync_with_stdio(false);
    int n, sq;
    cin >> n;
    for(int i=1; i <= n; i++){
        sq = 0;
        if(i%2 == 0){
            sq = i*i;
            cout << i << "^" << "2" << " =" << " " << sq << '\n';
        }
    }
}