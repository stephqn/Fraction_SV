/*
 * TPerson.cpp
 *
 *  Created on: 16 mai 2014
 *      Author: stephan
 */

#include <iostream>
#include <gtest/gtest.h>
#include "src/Fraction.h"

using namespace std;

string string("3/2");

/*
 * Test
 */


TEST(Person, isStringOk)
{
	EXPECT_EQ("3/2", Afficher());
}

