#ifndef COIN_H
#define COIN_H

#include <string>

using namespace std;

class COIN {
public:

	COIN();
	COIN(string country, string name, int year, int nominal, double cost);

	void country_set(string& country);
	void name_set(string& name);
	void year_set(int year);
	void nomin_set(int nom);
	void cost_set(double cost);

	string country_get();
	string name_get();
	int year_get();
	int nomin_get();
	double cost_get();

	void show();

private:
	string country;
	string name;
	int year;
	int nominal;
	double cost;
};

#endif 

