#pragma once
#include <string>
#include "..//Class1/User.h"
using namespace std;

class Employee : public User {
public:
    Employee();
    Employee(string name, string surname, unsigned int age, string login, string password, string jobTitle);
    void printPublicData();
    void printPersonalData();
private:
    string m_jobTitle;
};
