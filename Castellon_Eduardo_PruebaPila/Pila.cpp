#include "Pila.h"

Pila::Pila() : top(-1) {}

bool Pila::estaVacia()
{
	return top == -1;
}

bool Pila::estaLlena()
{
	return top == TAM - 1;
}

void Pila::insertar(char c)
{
	if (!estaLlena()) {
		elementos[++top] = c;
	}
}

char Pila::quitar()
{
	if (!estaVacia()) {
		return elementos[top--];
	}
	return '\0';
}

char Pila::cimaPila()
{
	if (!estaVacia()) {
		return elementos[top];
	}
	return '\0';
}

