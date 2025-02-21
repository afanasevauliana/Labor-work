#include "menu/CMenu.h"
#include "menu/CMenuItem.h"
#include <cmath>
#include <limits>
using namespace std;
#pragma region функции-заглушки

int f1() {
    int value = 25;
    cout << sqrt(value) << endl;
    return 1;
}

int f2() {
    cout << "\n";
    cout << "   *   \n";
    cout << "  ***  \n";
    cout << " ***** \n";
    cout << "*******\n";
    cout << "*     *\n";
    cout << "*     *\n";
    cout << "*     *\n";
    cout << "*******\n";
    return 2;
}

#pragma endregion

const int ITEMS_NUMBER = 2;


int main() {
    CMenuItem items[ITEMS_NUMBER] {CMenuItem{"root of 25", f1}, CMenuItem{"print house", f2}};
    CMenu menu("My console menu", items, ITEMS_NUMBER);
    while (menu.runCommand()) {};

    return 0;
}