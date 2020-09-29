/*
Electronics-Shop-Hacker-Solution.cpp
Description: Electronics-Shop-Hacker-Solution 
Author: Sachindra
*/
int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
     int res=-1;
     int len1=keyboards.size();
     int len2 = drives.size();
     for(int i=0;i<len1;i++) {
         for(int j=0;j<len2;j++) {
            if(keyboards[i]+drives[j] <= b)
               res = max(res,keyboards[i]+drives[j]);
        }
    }
    return res;
}
