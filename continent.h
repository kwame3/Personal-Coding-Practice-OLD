/*****************************************
 ** File:    continent.h
 ** Project: Personal Coding Practice
 ** Author:  Kwame Owusu-Boaitey
 ** Date:    9/13/20
 ** E-mail:  kwame@umbc.edu 
 **
 **   This file contains the continent header file.
 ** 
 ***********************************************/


#ifndef CONTINENT_H_
#define CONTINENT_H_

#include <string>
#include <vector>
using namespace std;

#include "country.h"

class Continent : public Country {

public:

  vector<Country> countriesInContinent;
  Country highestPopulation;
  Country highestGDPSpent;
  Country highestLiteracyRate;
  
  Country getHighestPopulation();
  Country getHighestGDPSpent();
  Country getHighestLiteracyRate();
  vector<Country> getCountriesInContinent();

  void setCountriesInContinent(vector <Country> theCountriesInContinent);
  void setHighestPopulation(Country theHighestPopulation);
  void setHighestGDPSpent(Country theHighestGDPSpent);
  void setHighestLiteracyRate(Country theHighestLiteracyRate);

  friend ostream& operator<< (ostream& outStream, Continent& a);

};

#endif
