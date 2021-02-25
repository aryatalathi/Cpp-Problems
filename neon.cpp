#include <iostream>
using namespace std;

int main() {
	//code
	int n, sum;
	cin>>n;
	int x =n;
	int s = n*n;
    while(s>0)
    {
    	int r = s%10;
    	s = s/10;
		sum = sum + r;
	}if(sum==n)
	{
	cout<<"Yes"<<endl;
	}	
	else
	{
	cout<<"No"<<endl;
	}
	return 0;

}
