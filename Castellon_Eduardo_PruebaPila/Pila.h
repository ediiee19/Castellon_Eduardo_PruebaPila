#pragma once
#include <string>
#include <iostream>
using namespace std;
const int TAM = 100;

class Pila {
private:
	char elementos[TAM];
	int top;
public:
	Pila();
	bool estaVacia();
	bool estaLlena();
	void insertar(char c);
	char quitar();
	char cimaPila();

};
