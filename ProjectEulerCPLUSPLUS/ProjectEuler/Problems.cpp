#include "Problems.h"
#include <vector>
#include "MathFunctions.h"
using namespace std;

Problems::Problems(void)
{
}


Problems::~Problems(void)
{
}



//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
//takes the highest number that is going to be used and figures out the least common multiple of all
//below the input
long long Problems::Problem5 (int divisableEnd) 
{
	long long number = 0;
	while(true)
	{
		bool found = false;
		number += divisableEnd;
		for (int i = divisableEnd; i>= (divisableEnd - 9); i--)
		{
			if(number % i != 0)
			{
				found = false;
				break;
			}
			found = true;
		}
		if(found)
			break;
	}

	return number;
}
//Hence the difference between the sum of the squares of the first ten natural numbers and the square 
//of the sum is 3025 − 385 = 2640.
//Find the difference between the sum of the squares of the first one hundred natural numbers and the 
//square of the sum.
//takes the numbers to square until and returns the solution
long long Problems::Problem6 (int squaresTo)
{
	long long sqrs = 0;
	long long sum = 0;
	for (int i = 1; i <= squaresTo; i++)
	{
		sqrs += i * i;
		sum += i;
	}
	return sum * sum - sqrs;
}

long long Problems::Problem7 (long primeNumber)
{
	vector<long> arr;
	long i = 0;
	while(arr.size() < primeNumber) {
		i += 1;
		if(MathFunctions::IsPrime(i))
			arr.push_back(i);
	}
	return arr[primeNumber - 1];
}

