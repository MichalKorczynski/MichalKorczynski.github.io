
#include <iostream>
#include <time.h>

void NWD1() {
    clock_t start = clock();
    int a, b;
    std::cout << "Podaj dwie liczby: ";
    std::cin >> a >> b;
    while (a != b) {
        if (a < b) {
            b = b - a;
        }
        else {
            a = a - b;
        }
    }
    std::cout << "NWD = " << a << std::endl;
    clock_t end = clock();
    double elapsed = double(end - start) / CLOCKS_PER_SEC;
    std::cout << "Czas wykonania: " << elapsed << std::endl;
}
void NWD2() {
    clock_t start2 = clock();
    int tmp;
    int a, b;
    std::cout << "Podaj dwie liczby: ";
    std::cin >> a >> b;
    while (b != 0) {
        tmp = b;
        b = a % b;
        a = tmp;
    }
    std::cout << "NWD = " << a << std::endl;
    clock_t end2 = clock();
    double elapsed2 = double(end2 - start2) / CLOCKS_PER_SEC;
    std::cout << "Czas wykonania: " << elapsed2 << std::endl;
}

int main()
{
    bool isTrue = true;
    while (isTrue) {
        int userInput;
        std::cout << "|==================================|" << std::endl;
        std::cout << "| Wybierz:                         |" << std::endl;
        std::cout << "|==================================|" << std::endl;
        std::cout << "| 0. Exit                          |" << std::endl;
        std::cout << "| 1. NWD sp1                       |" << std::endl;
        std::cout << "| 2. NWD sp2                       |" << std::endl;
        std::cout << "|==================================|" << std::endl;
        std::cout << ":";
        std::cin >> userInput;
        std::cout << std::endl;

        switch (userInput)
        {
        case 0:
            isTrue = false;
            break;
        case 1:
            NWD1();
            break;
        case 2:
            NWD2();
            break;
        default:
            isTrue = false;
            break;
        }
    }

}
