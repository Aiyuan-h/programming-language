#include<iostream>
#include<vector>
using namespace std;
vector<int> a;            //vector 也需要std的命名空间
vector<int>::iterator ptr;
int main()
{
    int input;
    while(cin>>input){
        if(input%2==0)
            a.push_back(input/2*(input+1));//int*int 溢出
        else
            a.push_back((input+1)/2*input);
    }

    if(cin.eof()){
        for(ptr=a.begin();ptr!=a.end();ptr++)
            cout<<*ptr<<endl<<endl;
    }
    return 0;
}
