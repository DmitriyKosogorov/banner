#include<iostream>
#include<cmath>
#include<fstream>
#include<string>
using namespace std;
bool prostoe(long long a)
{
	int d = sqrt(a);
	for (int i = 2; i <= d; i++)
		if (a % i == 0)
			return false;
	return true;
}

long long step10(int c)
{
	long long l = 1;
	for (int i = 0; i < c; i++)
		l = l * 10;
	return l;
}
long long makenumber(string s)
{
	long long a=0, b,c;
	int i;
	if (int(s[0]-48) == 0)
		return(4);
	for (i = 0; i < 10; i++)
	{
		b = (int)(s[i] - 48);
		c = (step10(10 - i-1));
		b = b *c;
		if(b>0)
		a = a + b;
	}
	return a;
}
int main()
{
	
	long long a, n=10000000,i;
	double ek=1;
	char c;
	string s;
	ifstream file;
	file.open("e2mil.txt");
	file >> c;
	file >> c;
	file >> c;
	s = s + c;
	file >> c;
	for (i = 2; i <= 10; i++)
	{
		file >> c;
		s = s + c;
	}
	while (file >> c)
	{
		a = makenumber(s);
		if (prostoe(a) == true)
		{

			cout << a<<endl;
			break;
		}
		s.erase(s.begin() + 0);
		s = s + c;
	}
	
	
	return 0;
}