#include <iostream>
using namespace std;

int main() {
	int test_cases;
	cin>>test_cases;
	while(test_cases-->0)
	{
	    int x,y;
	    cin>>x>>y;
	    
	    if(x+y>0)
	    {
	        if(x%2==0&&x)
	        cout<<"yes"<<'\n';
	        
	        else if(x==0&&y%2==0)
	        cout<<"yes"<<'\n';
	        
	        else
	        cout<<"no"<<'\n';
	    }
	}
	return 0;
}