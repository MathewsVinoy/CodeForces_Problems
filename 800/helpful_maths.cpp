#include <iostream>
#include <string>
using namespace std;

int main(){
        string input,out;
        int o=0,t=0,th=0;
        cin>>input;
        for(int i=0;i<input.size();i++){
                if(input[i]=='1')
                        o++;
                else if(input[i]=='2')
                        t++;
                else if(input[i]=='3')
                        th++;
        }
        for (int i = 0; i < o; i++) {
        out+='1';
        if (i < o-1)
            out+= '+';
        }
        for (int i = 0; i < t; i++) {
                if (i== 0 && o >0)
                         out+= '+';
                out+='2';
                if (i < t-1)
            out+= '+';
         }
        for (int i = 0; i < th; i++) {
                if (i==0 && (t > 0 || o > 0))
                         out+= '+';
                out+='3';
                if (i < th-1)
            out+= '+';
         }
cout<<out;
        return 0;
}