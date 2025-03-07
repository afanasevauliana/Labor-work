#include "Photographer.h"
#include "C:/Users/User/Desktop/git/Labor-work/Models/Class1/User.h"
#include <iostream>

Photographer::Photographer(string name, string surname, unsigned int age, string login, string password, string jobTitle) : User(name, surname, age, login, password), m_jobTitle(jobTitle) {}
Photographer::Photographer() {
    cout << "Name: " << m_name << "\nSurname: " << m_surname << "\nAge: " << m_age << "\nPost: " << m_jobTitle<< "Login: " << m_login << "Password: " << m_password  << endl;
}
