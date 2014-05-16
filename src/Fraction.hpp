/*
 * Fraction.hpp
 *
 *  Created on: 16 mai 2014
 *      Author: stephan
 */

#ifndef FRACTION_HPP_
#define FRACTION_HPP_

class Fraction {
public:
	Fraction();
	Fraction(int numerateur, int denominateur);
	virtual ~Fraction();

    int& getNum();
    void setNum(int& numerateur);

    int& getDenom();
    void setDenom(int& denominatueur);

private :
	int _numerateur;
	int _denominateur;

};

#endif /* FRACTION_HPP_ */
