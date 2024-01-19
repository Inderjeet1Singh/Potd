#include<bits/stdc++.h>
using namespace std;
class Solution{
public:	
	// Function returns the second
	// largest elements
	  int print2largest(int arr[], int n) {
	    int largest=INT_MIN,sec_largest=INT_MIN;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>largest){
	            sec_largest=largest;
	            largest=arr[i];
	        }
	        else if(arr[i]>sec_largest && arr[i]<largest){
	            sec_largest=arr[i];
	        }
	    }
	    if(sec_largest==INT_MIN) return -1;
	    return sec_largest;
	}
};
int main(){
    int t;
    cin>>t;
    while(t>0){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Solution ob;
    auto ans=ob.print2largest(arr,n);
    cout<<ans<<endl;
    t--;
    }
    return 0;
}