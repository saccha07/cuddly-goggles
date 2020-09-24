/*
Ransom-Note.cpp
Description: Ransome note hacker rank soulution using hashmap
Author:Sachindra

*/
void checkMagazine(vector<string> magazine, vector<string> note) {
    if(note.empty())
        return;
    if(note.size() > magazine.size())
    {
        cout<<"NO"<<endl;
        return;
    }

    map<string, int>map1;
    map<string, int>map2;
    for(int i=0;i<magazine.size();i++)
    {
       map1[magazine[i]]++;
    }
    for(int i=0;i<note.size();i++)
    {
       map2[note[i]]++;
    }
    map<string, int>::iterator it;
    bool success=1;
    for(it=map2.begin();it!=map2.end();it++){
        if(map1[it->first] <it->second) {
           success=0;
           break;
        }
    }
    if(success) {
       cout<<"Yes"<<endl;
    } else
        cout<<"No"<<endl;
}
