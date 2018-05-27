/*********************************************************************
** Program name:
** Author:
** Date: 6/30/2017
** Description: This .hpp file declares functions for Menu class
** objects.
**********************************************************************/
#ifndef MENU_HPP
#define MENU_HPP
#include "Selection.hpp"

class Menu
{
private:
	std::vector<Selection*> list;
	int currentChoice;

public:
	void add(Selection*);
	void displayMenu();
	void makeChoice();
	int getChoice();


};


#endif