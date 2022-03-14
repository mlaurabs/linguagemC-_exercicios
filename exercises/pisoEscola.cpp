#include <iostream>
using namespace std;
int main(){
    int l, c, qdtt1, qdtt2;
    cin >> l;
    cin >> c;
    qdtt1 = (l*c)+(l-1)*(c-1);
    qdtt2 = 2*(l-1)+2*(c-1);
    cout << qdtt1;
    cout << qdtt2;
}