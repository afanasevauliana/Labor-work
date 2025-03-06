#pragma once
#include "..\Class1\User.h"
#include "..\Service\Service.h"
#include<string>
using namespace std;

namespace AK {
	class Client :public User {
	public:
		Client();
		Client(string name, string surname, int age, string login, string password, string deposit);
		void printPublicData();
		void printPersonalData();
	private:
		string m_deposit;
	};
}
