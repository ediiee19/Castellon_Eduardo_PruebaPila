#pragma once
#include "Pila.h"

class PaliChecker
{
public:
	PaliChecker();
	PaliChecker(const string& frase);
	void setFrase(const string& frase);
	string filtro(const string& frase);
	bool esPali();
	string frase;
	
};

