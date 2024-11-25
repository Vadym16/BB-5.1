#include "coin.h"
#include <iostream>

using namespace std;


COIN::COIN() : country(""), name(""), year(0), nominal(0), cost(0.0) {}

COIN::COIN(string country, string name, int year, int nominal, double cost) :
	country(country), name(name), year(year), nominal(nominal), cost(cost) {}

void COIN::country_set(string& country) { this->country = country; }
void COIN::name_set(string& name) { this->name = name; }
void COIN::year_set(int year) { this->year = year; }
void COIN::nomin_set(int nom) { this->nominal = nom; }
void COIN::cost_set(double cost) { this->cost = cost; }

string COIN::country_get() { return country; }
string COIN::name_get() { return name; }
int COIN::year_get() { return year; }
int COIN::nomin_get() { return nominal; }
double COIN::cost_get() { return cost; }

void COIN::show() {
	cout << "Країна: " << country << ", Ім'я: " << name << endl;
	cout << "Рік: " << year << ", Номінал: " << nominal << endl;
	cout << "Ціна: " << cost << endl;
}