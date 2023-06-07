#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,int>map1;
    map1["Rupam"]=98;
    map1["Akash"]=96;
    map1["Roni"]=95;
    map1.insert({{"Taniya",95},{"Abir",91}});
    map<string,int>::iterator itr;
    for(itr=map1.begin();itr!=map1.end();itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }
}