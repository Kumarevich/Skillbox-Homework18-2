#include <iostream>

int options(int n) {
    if (n == 0) return 0;
    else if (n == 1) return 1;
    else if (n == 2) return 2;
    else if (n == 3) return 4;
    else return (options(n - 1) + options(n - 2) + options(n - 3));
}

int main() {
    int n;
    std::cout << "Input the target: ";
    std::cin >> n;
    std::cout << options(n);
    return 0;
}
