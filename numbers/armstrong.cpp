#include <iostream>
using namespace std;

int main() {
	//code
	int n, sum;
	cin>>n;
	int x =n;
    while(n>0)
    {
    	int r = n%10;
    	n = n/10;
		sum = sum + r*r*r;
	}if(sum==x)
	{
	cout<<"Yes"<<endl;
	}	
	else
	{
	cout<<"No"<<endl;
	}
	return 0;

}
