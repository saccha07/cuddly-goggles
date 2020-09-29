 /*
 BitWiseANDArray.cpp
 Descriptio: Count of pairs whose bitwise AND is a power of 2
 Author:Sachindra
 */
 bool check(int x) 
{ 
    // Returns true if x is a power of 2 
    return x && (!(x & (x - 1))); 
} 
 

long countPairs(vector<int> arr) {
  int cnt = 0; 
   int n=arr.size();
    // Iterate for all possible pairs 
    for (int i = 0; i < n - 1; i++) { 
  
        for (int j = i + 1; j < n; j++) { 
  
            // Bitwise and value of 
            // the pair is passed 
            if (check(arr[i] 
                      & arr[j])) 
                cnt++; 
        } 
    } 
  
    // Return the final count 
    return cnt; 
}
