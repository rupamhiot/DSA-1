#include<iostream>
#include<iterator>
// #include<iterator>
#include<list>

using namespace std;
template <class T>
void display(list<T> &lst)
{
    list<int> ::iterator iter;
    // iter=list2.begin();
    // for(int i=0;i<list2.size();i++)
    // {
    //     cout<<*iter+i;
    // }
    for( iter=lst.begin();iter!=lst.end();iter++)
    {
        cout<<*iter<<" ";

    }
    cout<<endl;

}

int main()
{
    list<int>list1;
    list<int>list2(3);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(4); 
    display(list1);
    // list1.remove(3);
    list1.pop_front();
    list1.pop_back();
    display(list1);
    list<int>::iterator itr;
    itr=list2.begin();
    *itr=45;
    itr++;
    *itr=43;
    itr++; 
    *itr=47;
    itr++;
    display(list2);
    list1.merge(list2);
    display(list1);
    
}