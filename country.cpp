/*****************************************
 ** File:    country.cpp
 ** Project: Personal Coding Practice
 ** Author:  Kwame Owusu-Boaitey
 ** Date:    9/13/20
 ** E-mail:  kwame@umbc.edu 
 **
 **   This file contains the country header file.
 **
 ***********************************************/


#include <iostream>
#include <string>
#include <cstdlib>
#include <math.h>

using namespace std;

#include "country.h"


string Country::getName()
{
  return name;
}

long Country::getPopulation()
{
  return population;
}

float Country::getLiteracyRate()
{
  return literacyRate;
}

float Country::getPrimaryCompletionFemale()
{
  return primaryCompletionFemale;
}

float Country::getPrimaryCompletionMale()
{
  return primaryCompletionMale;
}

float Country::getPrimaryCompletionTotal()
{
  return primaryCompletionTotal;
}

float Country::getEducationGDPSpent()
{
  return educationGDPSpent;
}

float Country::getYouthLitRateFem()
{
  return youthLitRateFem;
}

float Country::getYouthLitRateMale()
{ 
  return youthLitRateMale;
}

void Country::setName(string theName)
{
  name = theName;
}

void Country::setPopulation(string thePopulation)
{
  if (thePopulation == "N/A")
    population = -1;

  else
    {
      // Creates a "const char string" so that it can be converted to a "long" later
      const char *thePopulationCopy = thePopulation.c_str();
      population = atol(thePopulationCopy);
    }
}

void Country::setLiteracyRate(string theLiteracyRate)
{
  if (theLiteracyRate == "N/A")
    literacyRate = -1;

  else
    {
      const char *theLiteracyRateCopy = theLiteracyRate.c_str();
      literacyRate = atof(theLiteracyRateCopy);
    }
}

void Country::setPrimaryCompletionFemale(string thePrimaryCompletionFemale)
{
  if (thePrimaryCompletionFemale == "N/A")
    primaryCompletionFemale = -1;

  else
    {
      const char *thePrimaryCompletionFemaleCopy = thePrimaryCompletionFemale.c_str();
      primaryCompletionFemale = atof(thePrimaryCompletionFemaleCopy);
    }
}
void Country::setPrimaryCompletionMale(string thePrimaryCompletionMale)
{
  if (thePrimaryCompletionMale == "N/A")
    primaryCompletionMale = -1;

  else
    {
      const char *thePrimaryCompletionMaleCopy = thePrimaryCompletionMale.c_str();
      primaryCompletionMale = atof(thePrimaryCompletionMaleCopy);
    }
}
void Country::setPrimaryCompletionTotal(string thePrimaryCompletionTotal)
{
  if (thePrimaryCompletionTotal == "N/A")
    primaryCompletionTotal = -1;

  else
    {
      const char *thePrimaryCompletionTotalCopy = thePrimaryCompletionTotal.c_str();
      primaryCompletionTotal = atof(thePrimaryCompletionTotalCopy);
    }
}

void Country::setEducationGDPSpent(string theEducationGDPSpent)
{
  if (theEducationGDPSpent == "N/A")
    educationGDPSpent = -1;

  else
    {
      const char *theEducationGDPSpentCopy = theEducationGDPSpent.c_str();
      educationGDPSpent = atof(theEducationGDPSpentCopy);
    }
}

void Country::setYouthLitRateFem(string theYouthLitRateFem)
{
  if (theYouthLitRateFem == "N/A")
    youthLitRateFem = -1;

  else
    {
      const char *theYouthLitRateFemCopy = theYouthLitRateFem.c_str();
      youthLitRateFem = atof(theYouthLitRateFemCopy);
    }
}

void Country::setYouthLitRateMale(string theYouthLitRateMale)
{
  if (theYouthLitRateMale == "N/A")
    youthLitRateMale = -1;

  else
    {
      const char *theYouthLitRateMaleCopy = theYouthLitRateMale.c_str();
      youthLitRateMale = atof(theYouthLitRateMaleCopy);
    }
}
