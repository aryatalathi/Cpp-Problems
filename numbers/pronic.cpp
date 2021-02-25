#include<iostream>
using namespace std;

int main()
{
	int n=240, i=1;
	while(i*(i+1)<=n)
	{
		if(i*(i+1)==n)
		{
			cout<<n<<" is pronic number"<<endl;
			break;
		}
		i++;
	}
}
