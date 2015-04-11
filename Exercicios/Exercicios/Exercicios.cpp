// Exercicios.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{

	int z = 0;

	/*
	
	Exercicio 7.10
	
	*/

	long double value1 = 20000;
	long double value2;

	long double *lptr;

	lptr = &value1;

	printf("%Lf\n", *lptr);

	value2 = *lptr;

	printf("%Lf\n", value2);

	//os valores contidos em &value1 e &lptr sao diferentes
	printf("%p\n", &value1);
	printf("%p\n", &lptr);

	scanf("%d", z);

	return 0;
}

