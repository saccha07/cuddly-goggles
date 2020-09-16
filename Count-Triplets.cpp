//Count-Triplets.cpp
//Count Triplets hacker rank soultion
//Author: Sachindra

#include<iostream>
#include<string>
#include<algorithm>
#include<map>
using namespace std;

// Complete the countTriplets function below.
//below solution works in o(n3) which wil not pass any test cases
/*long countTriplets(vector<long> arr, long r) {
long count=0;
int len=arr.size();
for (int i=0;i<len;i++){
    for(int j =i+1;j<len;j++)
    {
        for(int k=j+1;k<len;k++)
        {
            if(arr[j] == r*arr[i])
            {
                if(arr[k]==r*arr[j])
                count++;
            }
        }
    }
    
}
return count;
}
*/
map<long long,long long> lmap,rmap;


long countTriplets(vector<long> arr, long r) {
	int len=arr.size();
	long countTriplets=0;
	for (int i=0;i<len;i++)
	{
		rmap[arr[i]]++;
	}
	for(int i=0;i<len;i++)
	{
		rmap[arr[i]]--;
		if(arr[i]%r==0)
		{
			countTriplets+=lmap[arr[i]/r]*rmap[arr[i]*r];
		}
		lmap[arr[i]]++;
		
	}
	return countTriplets;

}
