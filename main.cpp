#include <iostream>

using namespace std;

int sumOfCube(int n);


int main() {
    
cout << sumOfCube(4);


    return 0; 
}

int sumOfCube(int n) {
    if (n <= 1) {
        return 1;
    }

    int cubed = n * n * n;

    return cubed + sumOfCube(n-1);
}
