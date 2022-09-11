#include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int test_case_arpan;
	cin>>test_case_arpan;
	while(test_case_arpan--)
	{
	    int shape_of_vecotrji;
	    cin>>shape_of_vecotrji;
	    std::vector<int> vji;
	    for(int j=0; j<shape_of_vecotrji; j++){
	    	//cout<<"j "<<j<<endl;
	        int temp;
            cin>>temp;
            vji.push_back(temp);// I don't know how to push_back here!!
        }
        int s= vji.size();
        int counterl=0;
        
        
        	//cout<<"shape of vector "<<shape_of_vecotrji<<endl;
        for(int j=2; j<shape_of_vecotrji; j++){
        	cout<<vji[j]<<" ";
        	
            if(vji[0]!=vji[j-1])
            {	
                counterl=s-j+1;
               break;
            }
        }
        cout<<counterl<<endl;
        
	}
	return 0;
}

