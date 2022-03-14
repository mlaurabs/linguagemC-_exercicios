#include <iostream>

/*Read an integer N, which represents the number of following test cases. Each test case consists of three floating-point numbers, each one with one digit after the decimal point. 
Print the weighted average for each of these sets of three numbers, considering that the first number has weight 2, the second number has weight 3 and the third number has weight 5.*/


int main(){
    std::ios::sync_with_stdio(false);
    float g1, g2, g3, media;
    int n;
    std::cin >> n;
    
    for(int i=0; i < n; i++){
        std::cin >> g1 >> g2 >> g3;
        media = (g1*2 + g2*3 + g3*5)/(2+3+5);
        std::cout.precision(1);
        std::cout << std::fixed << media << '\n';
        
    }
    
}