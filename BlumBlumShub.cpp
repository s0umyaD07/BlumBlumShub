#include "BlumBlumShub.h"


//default constructor
BlumBlumShub::BlumBlumShub()
{
	//default insecure params
	this->p = 13;
	this->q = 23;
	//default seed
	this->x0 = 6;
	//default product of p ann q
	this->n = p * q;
}

/*
    setting object parameters
    @parameter blum prime number p
    @parameter blum prime number q
    @parameter integer seed
*/
void BlumBlumShub::setParameters(long p, long q, long seed)
{
	//choose p and q primes satisfying gcd(p, q) = 1
	this->p = p;
	this->q = q;
	//random seed 1<seed<n-1
	this->x0 = seed;
	//blum integer
	this->n = p * q;
}

/*
    overloaded BlumBlumShub constructor
   setting all parameters
*/
BlumBlumShub::BlumBlumShub(long p, long q, long seed)
{
	this->setParameters(p, q, seed);
}


/*
    Getting next random number
*/
long BlumBlumShub::getRandomNumber()
{
	long nextRandomNumber = (this->x0 * this->x0) % this->n;
	this->x0 = nextRandomNumber;
	return nextRandomNumber;
}

/*
    Geting next random bit
*/
int BlumBlumShub::getRandomBit()
{
	return this->getRandomNumber() % 2;
}

void BlumBlumShub::setPValue(long p)
{
	this->p = p;
}

void BlumBlumShub::setQValue(long q)
{
	this->q = q;
}

void BlumBlumShub::setSeedValue(long seed)
{
	this->x0 = seed;
}

BlumBlumShub::~BlumBlumShub(){}
