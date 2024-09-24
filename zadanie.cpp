
#include <iostream>
#include <time.h>

void NWD1() { //B1.a
    //kr00
    clock_t start = clock(); //B2
    int a, b; //kr01
    std::cout << "Podaj dwie liczby: ";
    std::cin >> a >> b;
    while (a != b) { //kr02
        if (a < b) { //kr03
            b = b - a;
        }
        else {
            a = a - b;
        }
    }
    std::cout << "NWD = " << a << std::endl; //kr04
    clock_t end = clock();
    double elapsed = double(end - start) / CLOCKS_PER_SEC;
    std::cout << "Czas wykonania: " << elapsed << std::endl;
} //kr05
void NWD2() { //B1.b
    clock_t start2 = clock(); //?B2
    int tmp;
    int a, b; //kr01
    std::cout << "Podaj dwie liczby: ";
    std::cin >> a >> b;
    while (b != 0) { //kr02
        tmp = b; //kr03
        b = a % b; //kr04
        a = tmp; //kr05
    }
    std::cout << "NWD = " << a << std::endl; //kr06
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
