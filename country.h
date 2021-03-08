/*****************************************
 ** File:    country.h
 ** Project: Personal Coding Practice
 ** Author:  Kwame Owusu-Boaitey
 ** Date:    9/13/20
 ** E-mail:  kwame@umbc.edu
 **
 **   This file contains the country header file.
 **
 ***********************************************/


#ifndef COUNTRY_H_
#define COUNTRY_H_

#include <string>
using namespace std;

class Country {

public:

  string name;
  long population;
  float literacyRate;
  float primaryCompletionFemale;
  float primaryCompletionMale;
  float primaryCompletionTotal;
  float educationGDPSpent;
  float youthLitRateFem;
  float youthLitRateMale;
  
  string getName();
  long getPopulation();
  float getLiteracyRate();
  float getPrimaryCompletionFemale();
  float getPrimaryCompletionMale();
  float getPrimaryCompletionTotal();
  float getEducationGDPSpent();
  float getYouthLitRateFem();
  float getYouthLitRateMale();

  void setName(string theName);
  void setPopulation(string thePopulation);
  void setLiteracyRate(string theLiteracyRate);
  void setPrimaryCompletionFemale(string thePrimaryCompletionFemale);
  void setPrimaryCompletionMale(string thePrimaryCompletionFemale);
  void setPrimaryCompletionTotal(string thePrimaryCompletionTotal);
  void setEducationGDPSpent(string theEducationGDPSpent);
  void setYouthLitRateFem(string theYouthLitRateFem);
  void setYouthLitRateMale(string theYouthLitRateMale);

};

#endif
