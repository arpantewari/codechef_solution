#include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int arpancase;
	cin>>arpancase;
	while(arpancase--)
	{
	    int N_ji,K_ji,V_ji;
	    cin>>N_ji>>K_ji>>V_ji;
	    std::vector<int> vector_ji;
	    int sum_of_arr=0;
	    for(int i=0;i<N_ji;i++)
	    {
	        int t_ji;
	        cin>>t_ji;
	        vector_ji.push_back(t_ji);
	        sum_of_arr=sum_of_arr+t_ji;
	        
	    }
	    int x=((V_ji*(N_ji+K_ji)-sum_of_arr)/K_ji);
	    if(x>0)
	    {
	    	cout<<x<<endl;
		}
		else
		{
			 cout<<-1<<endl;
		}
	   
	    
	}
	return 0;
}

