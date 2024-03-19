#include <iostream>
using namespace std;

int main()
{
	int i,j,s;
	int n=4 ;
    for(i=n;i>=1;i--)
    {
    	for(s=1;s<=n-i;s++){
    		cout << " ";
		}
		for(j=1;j<=i;j++){
			cout << "*";
		}
		cout<< endl;
	}
	
}

