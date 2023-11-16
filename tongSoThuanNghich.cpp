#include <iostream>

long long a[10] = {45,495,49500,495000,49500000,495000000,49500000000,495000000000,49500000000000,495000000000000};
int main() {
    int n;
    std::cin >> n;
    std::cout << a[n - 1] << std::endl;

    return 0;
}
