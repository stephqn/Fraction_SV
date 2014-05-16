/*
 * Fraction.hpp
 *
 *  Created on: 16 mai 2014
 *      Author: stephan
 */

#include <string>

#ifndef FRACTION_HPP_
#define FRACTION_HPP_
using namespace std;

class Fraction {
public:
	Fraction();
	Fraction(int numerateur, int denominateur);

	string Afficher();
	virtual ~Fraction();

    const int getNum() const;
    void setNum(const int numerateur);

    const int getDenom() const;
    void setDenom(const int denominateur);
    string toString(const int tostring);

private :
	int _numerateur;
	int _denominateur;
	string stringfraction;

protected :
	string _stringfraction;

};

#endif /* FRACTION_HPP_ */
