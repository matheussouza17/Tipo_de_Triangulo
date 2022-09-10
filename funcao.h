#include <cstdlib>
#include <iostream>
#include<iomanip>
#include<stdio.h>
#include<locale>
using namespace std;

double lePositivo() {
	int a;
	do {
		cout << "Digite um numero: ";
		cin >> a;
	} while (a < 0);
	return a;
}

void tipoTriangulo(double l1, double l2, double l3) {
	
		if ((l1 + l2) > l3 && (l2+l3)>l1 && (l3+l1)>l2) {
			if (l1 == l2 && l2 == l3) {
				cout << "Trianglo Equilatero\n";
			}
			else if (l1==l2 || l1==l3 || l2==l3) {
				cout << "Trianglo Isoceles\n"; 
			}
			else {
				cout << "Trianglo Escaleno\n";
			}

		}
		else {
			cout << "Nao e triangulo\n";
		}
		
	
}


