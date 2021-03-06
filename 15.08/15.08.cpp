// 15.08.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include<ctime>

using namespace std;

//vvodnoe soobwenie 
void PowerA3(int A, int &B)
{
	B = A * A*A;
}

//Абрамян
//Proc2
void PowerA234(int A, int &B, int &C, int &D)
{
	B = A * A;
	C = A * A * A;
	D = A * A * A * A;
}

//Proc3
void Mean(int X, int Y, int &AMean, int &GMean)
{
	AMean = (X + Y) / 2;
	GMean = sqrt(X*Y);
}

//Proc 4
void TrianglePS(int a, int &P, int &S)
{
	P = 3*a;
	S = pow(a, 2)*(sqrt(3.0)/4);
}

//Proc6
void DigitCountSum(int K, int &C, int &S)
{
	C = 0, S = 0;
	while (K != 0)
	{
		C++;
		S += K % 10;
		K = K / 10;
	}
}

//Proc7
void InvertDigits(int &K)
{
	int a = 0;
	while (K != 0)
	{
		a += K % 10;
		a = a * 10;
		K = K / 10;
	}
	K = a/10;
}
//Proc8
void AddRightDigit(int D, int &K)
{
	K = K * 10 + D;	
}

//Proc26
bool isPower5(unsigned int K)
{
	if (K == 0)
		return false;

	while (K > 1)
	{
		if (K % 5 != 0)
			return false;
		K = K / 5;
	}
	return true;
}
//Zadacha 24 c word doc
void SwapArray(int a[], int size)
{
	for (int i = 0; i < size/2; i++)
	{
		swap(a[i], a[size-1-i]);
	}
}
//Zadacha 25 c word doc
void chisla(int a, int b, int c)
{
	for (int i = 0; i < 1000; i++)
	{
		if (i%a == 0 && i%b == 0 && i%c == 0)
			cout << i << endl;
	}
}
//Zadacha  c word doc
bool  check(char str[])
{
	int c = 0, n=0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (c < 0)
			return false;
		if (str[i] == '(')
			c++;
		else if (str[i] == ')')
			c--;
		if (n < 0)
			return false;
		if (str[i] == '[')
			n++;
		else if (str[i] == ']')
			n--;
	}

	if (c != 0 || n!=0)
		return false;
	return true;
}

int main()
{
	/*Zadacha 25
	//int a, b, c;
	cin >> a >> b >> c;

	chisla(a, b, c);*/
	
	/*Zadacha 26
	//char str[30];
	cin >> str;

	cout << check(str) << endl;*/

	/*Zadacha 24 c word doc
	//int a[] = { 1,2,3,4,5 };

	SwapArray(a, 5);
	
	for (int i = 0; i < 5; i++)
	{
		cout << a[i];
	}*/

	/*Proc26
	//int n;
	cin >> n;
	cout << isPower5(n) << endl;*/

	/*Proc8
	//int D, K;
	cin >> K>> D;


	AddRightDigit(D, K);

	cout << K << endl;*/

	/*Proc7
	//int b;
	cin >> b;

	InvertDigits(b);

	cout << b<<endl;*/
	/*Proc 6
	//int x, y, z;
	cin >> x;

	DigitCountSum(x, y, z);

	cout <<"kolichestvo cifr " << y <<endl;
	cout << "summa cifr chisla " << z << endl;*/

	/*Proc 4
	//int a, b, c;
	int P, S;

	cin >> a >> b >> c;

	TrianglePS(a, P, S);

	cout << "Perimetr 1 = " << P << endl;
	cout << "Plowad 1 = " << S << endl;

	TrianglePS(b, P, S);

	cout << "Perimetr 2 = " << P << endl;
	cout << "Plowad 2 = " << S << endl;

	TrianglePS(c, P, S);

	cout << " Perimetr 3 = " << P << endl;
	cout << " Plowad 3 = " << S << endl;*/

	/*Proc3
	//int A, B, C, D;
	int AMean, GMean;

	cin >> A >> B >> C >> D;

	Mean(A, B, AMean, GMean);

	cout << AMean << " " << GMean << endl;

	Mean(A, C, AMean, GMean);

	cout << AMean << " " << GMean << endl;

	Mean(A, D, AMean, GMean);

	cout << AMean << " " << GMean << endl;*/

	/*Proc2
	//int x, y, w, z;
	cin >> x;
	PowerA234(x, y, w , z);

	cout << y <<" "<<w<<" "<< z<< endl;*/
	
	/*vvodnoe soobwenie
	//1int x, y=1000;
	cin >> x;
	PowerA3(x, y);

	cout << y << endl;*/
	
	

	system("pause");
    return 0;
}

