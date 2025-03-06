#include "Employee.h"
#include <iostream>

Employee::Employee(string name, string surname, unsigned int age, string login, string password, string ) : User(name, surname, age, login, password), m_jobTitle(jobTitle) {}
void Employee::Employee() {
    cout << "Name: " << m_name << "\nSurname: " << m_surname << "\nAge: " << m_age << "\nPost: " << m_jobTitle << endl;
}
void Employee::Employee() {
    cout << "Login: " << m_login << "Password: " << m_password << endl;
}
