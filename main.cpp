#include "menu/CMenu.h"
#include "menu/CMenuItem.h"
#include <cmath>

using namespace std;


#pragma region функции-заглушки
int f1() {
    int value = 25;
    std::cout << "function f1 is running...\n\n";
    std::cout << sqrt(value);
    return 1;
}

int f2() {
    std::cout << "function f2 is running...\n\n";
    return 2;
}

int f3() {
    std::cout << "function f3 is running...\n\n";
    return 3;
}

int f4() {
    std::cout << "function f4 is running...\n\n";
    return 4;
}
#pragma endregion

const int ITEMS_NUMBER = 4;


int main() {
    CMenuItem items[ITEMS_NUMBER] {CMenuItem{"root of 25", f1}, CMenuItem{"second item", f2}, CMenuItem{"third item", f3}, CMenuItem{"Fourth item",f4}};
    CMenu menu("My console menu", items, ITEMS_NUMBER);
    while (menu.runCommand()) {};

    return 0;
}