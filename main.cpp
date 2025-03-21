#include "menu/CMenu.h"
#include "menu/CMenuItem.h"
#include "Models/Class1/User.h"
#include "Models/Class2/Photographer.h"
#include "Models/Class3/Client.h"
#include <cmath>
#include <limits>
using namespace std;
#pragma region функции-заглушки

int f1() {
    int value = 25;
    cout << "The root of 25 is " << sqrt(value) << endl;
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
    cout << "*******\n\n";
    return 2;
} 

int getEmployee() {
	Photographer Daniil("Afanaseva", "Yuliana", 18, "yuliana0402", "1234", "Cleaner");
	cout << "\n";
	return 3;
}

int getClient() {
	cout << "\n";
	return 4;
}


#pragma endregion

const int ITEMS_NUMBER = 4;


int main() {
    CMenuItem items[ITEMS_NUMBER] {CMenuItem{"Root of 25", f1}, CMenuItem{"Print house", f2}, CMenuItem{"getEmployee", getEmployee}, CMenuItem{"getClient", getClient}};
    CMenu menu("My console menu", items, ITEMS_NUMBER);
    while (menu.runCommand()) {};

    return 0;
}