#include<iostream>
#include<vector>
using namespace std;
vector<int>c,d;
vector<int>::iterator ptr,p;
int main()
{
    int a;
    while(cin>>a){
        c.push_back(a);
    }
    int m;
    int sum=0;
    ptr=c.begin();
    m=*ptr;
    while(ptr!=c.end()){
        for(;m>0;m--)
            sum+=*(++ptr);
        d.push_back(sum);
        sum=0;
        m=*(++ptr);
    }
    for(p=d.begin();p!=d.end();p++)
        cout<<*p<<endl;

    return 0;
}

