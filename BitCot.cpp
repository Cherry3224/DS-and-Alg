#include<iostream>
#include<vector>

using namespace std;

void BitCot(vector<long> &a, long &x)
{
	long i = a.size() - 1;
	
	while(i > -1 && a[i] == 1)
	{
		a[i] = 0;
		i--;
	}
	if(i < 0)
	{
		x = 0;
	}
	else
	{
		a[i] = 1;
	}
}

bool Sieve(vector<long> &a)
{
	for(long i = 0; i <= a.size() / 2; i++)
	{
		if(a[i] != a[a.size() - i - 1])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	long n, x = 1;
			cin >> n;
			
		vector<long> a(n, 0);
		while(x)
		{
			if(Sieve(a))
			{
				for(long i : a)
				{
						cout << i << " ";
				}
					cout << endl;
			}	
			BitCot(a, x);
		}
}