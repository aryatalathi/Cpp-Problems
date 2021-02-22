#include <iostream>
using namespace std;

int main() {
	//code
	int n, sum, pro;
	cin>>n;
	int x =n;
    while(n>0)
    {
    	int r = n%10;
    	n = n/10;
		sum = sum + r;
		pro = pro * r;
	}if(sum==pro)
	{
	cout<<"Yes"<<endl;
	}	
	else
	{
	cout<<"No"<<endl;
	}
	return 0;

}
