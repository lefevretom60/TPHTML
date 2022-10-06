// ConsoleApplication1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i, a,B, s = 0;

	printf("Donner un entier a: ");
	scanf("%d", &a);
	printf("Donner un entier b: ");
	scanf("%d", &b);

	if (b > 0)
	{
		for (i = 1;i <= b;i++)
		{
			s = s + a;
		}
	}
	else
	{
		for (i = 1;i <= (-b);i++)
		{
			s = s + (-a);
		}
	}
	printf("Le produit entre %d et %d est : %d", &a, b, s);
	
}

