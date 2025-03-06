#include "Service.h"
#include <iostream>
using namespace std;

Service::Service(string name, string client, int sum, int percent) : m_name(name), m_client(client), m_sum(sum), m_percent(percent) {};
void Service::printData() {
    cout << "\nName: " << m_name << "\nClient: " << m_client << "\nSum: " << m_sum << "\nPercent: " << m_percent;
}
