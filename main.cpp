#include <iostream>

using namespace std;

int sumOfCube(int n);
int tailRecursiveHelperSumOfCube(int n, int total);


int main() {
    
    cout << sumOfCube(4);


    return 0; 
}

// int sumOfCube(int n) {
//     if (n <= 1) {
//         return 1;
//     }

//     int cubed = n * n * n;

//     return cubed + sumOfCube(n-1);
// }

// Tail recursive below

int tailRecursiveHelperSumOfCube(int n, int total) {
    if (n <= 1) {
        return total+1;
    }

    int cubed = n * n * n;
    int newTotal = cubed + total;
    
    return tailRecursiveHelperSumOfCube(n-1, newTotal);
}

 int sumOfCube(int n) {
    return tailRecursiveHelperSumOfCube(n, 0);
 }
