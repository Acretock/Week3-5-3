#include <vector>
#include <iostream>

using namespace std;

class Incognizable
{
public:
	Incognizable();
	Incognizable(int a);
	Incognizable(int a, int b);
	~Incognizable();

private:
	int first;
	int second;
};

Incognizable::Incognizable()
{
}


Incognizable::Incognizable(int a)
{
	first = a;
	second = 0;
}


Incognizable::Incognizable(int a, int b)
{
	first = a;
	second = b;
}





Incognizable::~Incognizable()
{
}



int main()
{
	Incognizable a;
	Incognizable b = {};
	Incognizable c = { 0 };
	Incognizable d = { 0,1 };
}
