#include <cstdlib>
#include <cstdio>
#include <locale>
#include <Windows.h>
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
	SetConsoleOutputCP (CP_UTF8);
	float p1money;
	float valordolar;
	float cambiocalc;
	cout << "Quantos reais deseja depositar?" << endl;
	cin >> p1money;
	valordolar = 5.50;
	cambiocalc = p1money / valordolar;
	cout << "Isso garante cerca de " << cambiocalc << "dólares em sua conta." << endl;
	return 0;
}