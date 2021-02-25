#include <iostream>
using namespace std;

int main() {
	//code
	int n, sum, s;
	int flag=0;
	cin>>n;
	int x =n;
	s = n*n;
    while(n>0)
    {
    	if(n%10 != s%10)
    	{
    		flag=1;
    		break;
    		//cout<<"No"<<endl;
		}
		n = n/10;
		s = s/10;
	}
	if(flag==1)
	{
		cout<<"No"<<endl;
	}
	else
	cout<<"Yes"<<endl;
		
	
	return 0;

}
