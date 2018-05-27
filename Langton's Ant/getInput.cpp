/*********************************************************************
** Program name:
** Author:
** Date: 6/28/2017
** Description: This .cpp file defines functions for validating user
** inputs.
**********************************************************************/
#include "getInput.hpp"

int getInt(int *input)
{
	std::string inputString;
	bool valid = false;
	

	while (!valid)
	{
		int nonNumber = 0;
		getline(std::cin, inputString);
		
		for (int i = 0; i < inputString.size(); i++) // For all characters...
		{
			if (!isdigit(inputString[i])) // If ANY character is NOT a digit...
			{
				if (inputString[0] == '-') // If the first character is a negative sign...
				{
					for (int j = 1; j < inputString.size(); j++) // For all remaining characters... 
					{
						if (!isdigit(inputString[j])) // If ANY are NOT digits...
						{   
							nonNumber++;  // the string is NOT a valid integer
						}
					}
				}
				else {
					valid = false;
					break;
				}
			}
			else {
				valid = true;
			}
		}

		if (inputString.empty())
		{
			valid = false;
		}

		if (nonNumber >> 0)
		{
			valid = false;
		}

		if (valid == false)
		{
			std::cout << "Invalid input." << std::endl;
		}
	}

	*input = std::stoi(inputString);
	
	return 0; // is it better to pass the variable by reference or return the value from the function?
}


double getDouble(double *input)
{
	std::string inputString;
	bool valid = 0;
	double num = 0;
	
	while (!valid)
	{
		int negSigns = 0;
		int decimals = 0;
		int spaces = 0;
		int letters = 0;
		int symbols = 0;

		getline(std::cin, inputString);	

		for (int i = 0; i < inputString.size(); i++)
		{
			if (inputString[i] == '-')
			{
				negSigns++;
			}
			
			if (inputString[i] == '.')
			{
				decimals++;
			}

			if (inputString[i] == ' ')
			{
				spaces++;
			}

			if (isalpha(inputString[i]))
			{
				letters++;
			}

			if (!isdigit(inputString[i]) && !isalpha(inputString[i] && (inputString[i] != ' ') 
				                         && (inputString[i] != '.') && (inputString[i] != '-'))) // Don't know why this isn't ignoring decimals and spaces
			{
				symbols++;
			}
		}
		for (int j = 1; j < inputString.size(); j++)
		{
			if (inputString[j] == '-')
			{
				negSigns += 10;
			}
		}

		if (negSigns >> 1 || decimals >> 1 || spaces >> 0 || letters >> 0 || symbols >> 2)
		{
			valid = 0;
		}
		else {
			num = atof(inputString.c_str());
			valid = 1;
		}

		if (inputString.empty())
		{
			valid = 0;
		}

		if (valid == 0)
		{
			std::cout << "Invalid input." << std::endl;
		}
	}
	
	*input = num;

	return 0;

}