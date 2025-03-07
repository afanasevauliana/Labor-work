#pragma once
#include <string>
using namespace std;
class User {
public:
    User(string name,string surname,unsigned int age,string login,string password);
    User();
    void printPublicData();
    void printPersonalData();
    string m_name;
    string m_surname;
    unsigned int m_age;
    string m_login;
    string m_password;
};
