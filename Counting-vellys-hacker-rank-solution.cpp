/*
Counting-vellys-hacker-rank-solution.cpp
Description: Hacker rank solution
Author:Sachindra
*/
int countingValleys(int steps, string path) {
    int level=0;
    int velly=0;
    for(int i=0;path[i]!='\0';i++)
    {
        if(path[i]=='U') {
            level+=1;
            if(level==0)
            velly+=1;
        }
        else
        level-=1;
        
    }
    return velly;

}
