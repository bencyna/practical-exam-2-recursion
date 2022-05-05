// Non Tail recursive

int sumOfCube(int n) {
    if (n <= 1) {
        return 1;
    }

    int cubed = n * n * n;

    return cubed + sumOfCube(n-1);
}