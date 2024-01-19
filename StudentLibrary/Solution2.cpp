#include "Solution2.h"

#include <ostream>
#include <fstream>
#include <iostream>

// Don't forget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_2

float Solution2::GetBalance(const std::string& accountName)
{
	float balance = 0.f;
	float opperation = 0.f;
	std::ifstream fichier(accountName);
	if (fichier)
	{
		std::string ligne;
		std::string delimiter = " ";

		while (std::getline(fichier, ligne)) {
			size_t position = 0;
			if (position = ligne.find(delimiter) != std::string::npos)
			{
				size_t nouvellePosition = position + 1;
				std::string oppe = ligne.substr(0, position);
				if (oppe == "DEPOSIT")
				{
					opperation = std::stof(ligne.substr(nouvellePosition, position - nouvellePosition));
					balance = balance + opperation;
				}
				else if (oppe == "WITHDRAW")
				{
					opperation = std::stof(ligne.substr(nouvellePosition, position - nouvellePosition));
					balance =  balance - opperation;
				}
			}
		}
	}
	return balance;
}

#endif
