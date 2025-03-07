#include <iostream>
#include "User.h"

using namespace std;

User::User(string name, string surname, unsigned int age, string login, string password):m_name(name),m_surname(surname),m_age(age),m_login(login),m_password(password){}
User::User(){};
void User::printPublicData() {
    cout << "Name: " << m_name << endl;
    cout << "Surname: " << m_surname << endl;
    cout << "Age: " << m_age << endl;
};
void User::printPersonalData() {
    cout << "Login: " << m_login << endl;
    cout << "Password: " << m_password << endl;
};
