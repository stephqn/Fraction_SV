/*
 * Fraction.cpp
 *
 *  Created on: 16 mai 2014
 *      Author: stephan
 */

#include "Fraction.hpp"
#include <iostream>
#include <sstream>

Fraction::Fraction(){
}

Fraction::Fraction(int numerateur, int denominateur)
{
	_numerateur=numerateur;
	_denominateur=denominateur;
}

string Fraction::Afficher()
{
	string stringfraction = "" + toString(this->_numerateur) + "/" + toString(this->_denominateur);

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
string Fraction::toString(const int tostring)
{
   std::ostringstream oss;
   oss << tostring;
   return oss.str();
}

void Fraction::addition(const int ajout)
{
int numfrac = ajout;
int denfrac = 1;
int nres = this->_numerateur*this->_denominateur+numfrac*denfrac;
int dres = this->_denominateur*denfrac;
setNum(nres);
setDenom(dres);
}
void Fraction::addition(const Fraction& fraction)
{
    int numfrac = fraction.getNum();
    int denfrac = fraction.getDenom();
    int nres = this->_numerateur*this->_denominateur+numfrac*denfrac;
    int dres = this->_denominateur*denfrac;
    setNum(nres);
    setDenom(dres);
}

Fraction::~Fraction() {

}

