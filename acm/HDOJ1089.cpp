#include<iostream>
#include<vector>
using namespace std;
vector<int>c;
vector<int>::iterator ptr;
int main()
{
        int a,b;
        while(cin>>a>>b){
                c.push_back(a+b);
        }
        if(cin.eof()){
                for(ptr=c.begin();ptr!=c.end();ptr++)
                        cout<<*ptr<<endl;
        }
        return 0;
}

