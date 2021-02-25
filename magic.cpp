#include <iostream>
using namespace std;

int main() {
	//code
	int n, sum=0;
	cin>>n;
     while (n > 0 || sum > 9) 
    { 
        if (n == 0) 
        { 
            n = sum; 
            sum = 0; 
        } 
        sum += n % 10; 
        n /= 10; 
    } if(sum==1)
	{
	cout<<"Yes"<<endl;
	}	
	else
	{
	cout<<"No"<<endl;
	}
	return 0;

}
