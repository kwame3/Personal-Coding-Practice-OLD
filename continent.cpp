/*****************************************
 ** File:    continent.cpp
 ** Project: Personal Coding Practice
 ** Author:  Kwame Owusu-Boaitey
 ** Date:    9/13/20
 ** E-mail:  kwame@umbc.edu 
 **
 **   This file contains the continent class file.
 **
 ***********************************************/


#include <iostream>
#include <string>

using namespace std;

#include "continent.h"

vector <Country> Continent::getCountriesInContinent()
{
  return countriesInContinent;
}

Country Continent::getHighestPopulation()
{
  return highestPopulation;
}

Country Continent::getHighestGDPSpent()
{
  return highestGDPSpent;
}

Country Continent::getHighestLiteracyRate()
{
  return highestLiteracyRate;
}

void Continent::setCountriesInContinent(vector <Country> theCountriesInContinent)
{
  countriesInContinent = theCountriesInContinent; 
}

void Continent::setHighestPopulation(Country theHighestPopulation)
{
  highestPopulation = theHighestPopulation;
}

void Continent::setHighestGDPSpent(Country theHighestGDPSpent)
{
  highestGDPSpent = theHighestGDPSpent;
}

void Continent::setHighestLiteracyRate(Country theHighestLiteracyRate)
{
  highestLiteracyRate = theHighestLiteracyRate;
}

ostream& operator<< (ostream& outStream, Continent& a)
{
  outStream << a.getName() << endl;


  long population = 0;
  
    for (unsigned int i = 0; i < a.countriesInContinent.size(); i++)
    {
      population = population + a.countriesInContinent[i].getPopulation();
    }

  outStream << " " << "Population: " << population << endl;


  outStream << " " << "Country with highest literacy rate: " << a.getHighestLiteracyRate().getName() <<  " with a population of " << a.getHighestLiteracyRate().getPopulation() << " and a literacy rate of " << a.getHighestLiteracyRate().getLiteracyRate() << endl;
  outStream << " " << "Country with highest GDP expenditure on education: " << a.getHighestGDPSpent().getName() <<  " with a population of " << a.getHighestGDPSpent().getPopulation() << " and a literacy rate of " << a.getHighestGDPSpent().getLiteracyRate() << endl;
  outStream << " " << "Country with highest population: " << a.getHighestPopulation().getName() <<  " with a population of " << a.getHighestPopulation().getPopulation() << " and a literacy rate of " << a.getHighestPopulation().getLiteracyRate() << endl;
  return outStream;

}

