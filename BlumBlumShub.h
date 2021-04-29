#include <cmath>
#include<iostream>

class BlumBlumShub
{
private:
	long p, q, n, x0, decryptionExp;

public:
	BlumBlumShub();
	~BlumBlumShub();
	BlumBlumShub(long p, long q, long seed);

	void setPValue(long p);
	void setQValue(long q);
	void setSeedValue(long seed);
	int getRandomBit();
	long getRandomNumber();
	void setParameters(long p, long q, long seed);
};
