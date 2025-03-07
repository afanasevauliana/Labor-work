#include "Client.h"
#include "..\Class1\User.h"
#include <iostream>
using namespace std;

Client::Client(string name, string surname, int age, string login, string password, string service) : User(name, surname, age, login, password), m_service(service){}
void Client::printPublicData() {
    cout << "\nName: " << m_name << "\nSurname: " << m_surname << "\nAge: " << m_age<< "\nJobTitle: " << m_service << "Login: " << m_login << "\nPassword: " << m_password << endl;
}

