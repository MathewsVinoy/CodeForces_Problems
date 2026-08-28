#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int distrinctCount(string str){
        unordered_set<char> d(str.begin(), str.end());
        return d.size();
}

int main(){
        string name;
        cin>>name;
        int n = distrinctCount(name);
        if(n%2 == 0)
                cout<<"CHAT WITH HER!";
        else
                cout<<"IGNORE HIM!";
        return 0;
}