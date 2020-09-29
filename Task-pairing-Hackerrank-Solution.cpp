/*
Task-pairing-Hackerrank-Solution.cpp
Description: find the dumber pair
Author:Sachindra
*/
long taskOfPairing(vector<long> freq) {
    long len=freq.size();
    long count=0;
    long  k=0;
    for(long i=0;i<len;i++) {
        count = count+freq[i]/2;
        if(freq[i]%2!=0) {
            if(k==0)
             k=i+1;
             else {
                 if(((i+1)-k)<=1)
                    count+=1;
                k=i+1;
             }
        }
    }
    return count;
    
}
