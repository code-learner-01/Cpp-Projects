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
	// void removeSelection(Selection* selectionIn); any need for this?
	void displayMenu();
	void makeChoice();
	void makeCustomChoice(int min, int max);
	int getChoice();


};


#endif