#include "PaliChecker.h"

PaliChecker::PaliChecker()
{
}

PaliChecker::PaliChecker(const string& frase)
{
	setFrase(frase);
}

void PaliChecker::setFrase(const string& frase)
{
	this->frase = filtro(frase);
}

string PaliChecker::filtro(const string& frase)
{
	string resultado;
	for (char c : frase) {
		if ((c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z') ||
			(c >= '0' && c <= '9')) {
			resultado += tolower(c);
		}
	}
	return resultado;
}

bool PaliChecker::esPali()
{
	Pila pila;

	// Insertar caracteres en la pila
	for (char c : frase) {
		pila.insertar(c);
	}

	// Comparar cada carácter con el que se desapila
	for (char c : frase) {
		if (c != pila.quitar()) {
			return false;
		}
	}

	return true;
}
