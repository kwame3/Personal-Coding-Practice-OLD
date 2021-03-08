/*****************************************
 ** File:    driver.cpp
 ** Project: Personal Coding Practice
 ** Author:  Kwame Owusu-Boaitey
 ** Date:    9/13/20
 ** E-mail:  kwame@umbc.edu 
 **
 **   This file contains the main driver program.
 **   The program reads the file specified as the first command line
 **   argument, counts the number of words, spaces, and characters, and
 **   displays the results in the format specified in the project description.
 **
 **
 ***********************************************/

#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <math.h>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

#include "continent.h"
#include "country.h"

void readFromFiles(string file1, string file2) 
{
  // objects with 6 continents, excluding Antartica
  vector<Continent> world;  
  vector<Country> countries;
  ifstream infile;
  string temp;
  string value;
  Country country;

  infile.open(file1.c_str(), ios_base::in);
  
  if (infile.fail())
    {
      cout << "The file was not successfully opened." << endl;
      //exit(1);
    }
  
  // Skips the first line
  getline(infile, temp);

  // Searches through the file line by line
  while (getline(infile, temp))
    {

      int i = 0;

      // Grabs an element
      stringstream ss(temp);
      
      // The 9 represents the number of elements in each line
      while (i < 9)
	{	  
	  ss >> value;
	 
	  // Initializes the countries' variables based on the corresponding elements on each line
	  if (i == 0)
	    {
	      country.setName(value); 
	    }

	  if (i == 1)
	    {
	      country.setPopulation(value);
	    }

	  if (i == 2)
	    {
	      country.setLiteracyRate(value);
	    }
          if (i == 3)
            {
	      country.setEducationGDPSpent(value);
            }

          if (i == 4)
            {
	      country.setPrimaryCompletionTotal(value);
            }

          if (i == 5)
            {
	      country.setPrimaryCompletionMale(value);
            }
          if (i == 6)
            {
	      country.setPrimaryCompletionFemale(value);
            }

          if (i == 7)
            {
	      country.setYouthLitRateFem(value);
            }

          if (i == 8)
            {
	      country.setYouthLitRateMale(value);
	      countries.push_back(country);
            }

	  i++;
	}

    }
    
  ifstream infile1;
  infile1.open(file2.c_str(), ios_base::in);

  if (infile1.fail())
    {
      cout << "The file was not successfully opened." << endl;
      //exit(1);
    }

  string temp1;
  string continentName;
  string hyphens;
  string totalCountriesCopy;
  int totalCountries;

  // Searches through until the end of the text file 
  while (!infile1.eof())
    {
      Continent continent;

      // Grabs the values from the line and places them accordingply into these variables
      infile1 >> continentName >> hyphens >> totalCountriesCopy;
              
      // Converts the string version given from the file into an integer
      const char *totalCountriesCopy1 = totalCountriesCopy.c_str();
      totalCountries = atoi(totalCountriesCopy1);     
      continent.setName(continentName);
                  
      
      // Increments the getline according to the number of total countries for each continent
      for (int i = 0; i <= totalCountries; i++)
	{
	  getline(infile1, temp1);
	  stringstream ss(temp1);
	  ss >> temp1;

	  // Compares to see if the countries are present in both files
	  for (unsigned int j = 0; j < countries.size(); j++)
	    {
	      if ((countries[j].getName()) == temp1)
		{
		   
		  // Adds in the country
		  continent.countriesInContinent.push_back(countries[j]);
		} 
	    }
	}
    
      world.push_back(continent);
    }
  
  for (unsigned int i = 0; i < world.size(); i++)
    {
      long totalPopulation = 0;

      float highestLiteracyRate = world[i].countriesInContinent[0].getLiteracyRate();
      int highestLiteracyRateIndex = 0;

      float highestGDPSpent = world[i].countriesInContinent[0].getEducationGDPSpent();
      int highestGDPSpentIndex = 0;

      int highestPopulation = world[i].countriesInContinent[0].getPopulation();
      int highestPopulationIndex = 0;
      
      for (unsigned int j = 0; j < world[i].getCountriesInContinent().size(); j++)
	{
	  // Gathers the total population
	  totalPopulation = totalPopulation + world[i].countriesInContinent[j].getPopulation();

	  // Finds the highest literacy rate by comparing each literacy rate throughout the entire file
	  if (highestLiteracyRate < world[i].countriesInContinent[j].getLiteracyRate())
	    {
	      highestLiteracyRate = world[i].countriesInContinent[j].getLiteracyRate(); 
	      highestLiteracyRateIndex = j;
	    }

	  if (highestGDPSpent < world[i].countriesInContinent[j].getEducationGDPSpent())
            {
              highestGDPSpent = world[i].countriesInContinent[j].getEducationGDPSpent();
	      highestGDPSpentIndex = j;
            }

	  if (highestPopulation < world[i].countriesInContinent[j].getPopulation())
            {
              highestPopulation = world[i].countriesInContinent[j].getPopulation();
              highestPopulationIndex = j;
            }

	}

      // Sets the values in each continent
      world[i].setHighestLiteracyRate(world[i].countriesInContinent[highestLiteracyRateIndex]);
      world[i].setHighestGDPSpent(world[i].countriesInContinent[highestGDPSpentIndex]);
      world[i].setHighestPopulation(world[i].countriesInContinent[highestPopulationIndex]);
    }


  // Prints out the desired output
  for (unsigned int a = 0; a < world.size(); a++)
    {
      cout << world[a];
    }
  
}

int main ()
{
  string string1 = "/home/kwame/Downloads/proj0/2013WorldBankEducationCensusData.txt"; 
  string string2 = "/home/kwame/Downloads/proj0/CountriesContinent.txt";
  
  readFromFiles(string1, string2);

  return 0;
}
