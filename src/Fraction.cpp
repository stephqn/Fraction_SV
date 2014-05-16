/*
 * Fraction.cpp
 *
 *  Created on: 16 mai 2014
 *      Author: stephan
 */

#include "Fraction.hpp"
#include <iostream>

Fraction::Fraction(){
}

Fraction::Fraction(int numerateur, int denominateur)
{
	_numerateur=numerateur;
	_denominateur=denominateur;
}

string Fraction::Afficher()
{
	string stringfraction = "";

	return stringfraction;
}

const int Fraction::getNum() const
{
	return _numerateur;
}
const int Fraction::getDenom() const
{
	return _denominateur;
}
void Fraction::setNum(const int iNumerateur)
{
	_numerateur=iNumerateur;
}
void Fraction::setDenom(const int iDenominateur)
{
	_denominateur=iDenominateur;
}


Fraction::~Fraction() {

}

