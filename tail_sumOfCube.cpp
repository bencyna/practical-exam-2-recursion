
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
