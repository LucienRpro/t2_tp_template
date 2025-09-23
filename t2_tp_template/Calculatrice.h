#pragma once
#include <iostream>
using namespace std;

template <class T>
class Calculatrice
{
	private :
		T num1;
		T num2;
	public : 
		Calculatrice(T _num1, T _num2);
		T addition();
		T soustraction();
		T multiplication();
		T division();
		void afficherResultats();

};

template<class T>
inline Calculatrice<T>::Calculatrice(T _num1, T _num2)
{
	num1 = _num1;
	num2 = _num2;
}

template<class T>
inline T Calculatrice<T>::addition()
{
	return T(num1+num2);
}

template<class T>
inline T Calculatrice<T>::soustraction()
{
	return T(num1-num2);
}

template<class T>
inline T Calculatrice<T>::multiplication()
{
	return T(num1*num2);
}

template<class T>
inline T Calculatrice<T>::division()
{
	return T(num1/num2);
}

template<class T>
inline void Calculatrice<T>::afficherResultats()
{
	cout << "Addition (num1+num2) : " << addition() << endl;
	cout << "Soustraction (num1-num2) : " << soustraction() << endl;
	cout << "Multiplication (num1*num2) : " << multiplication() << endl;
	cout << "Division (num1/num2) : " << division() << endl;
}
