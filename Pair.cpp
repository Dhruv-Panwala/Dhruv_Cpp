#include<iostream>
#include<map>
using namespace std;

main()
{
    map<string,int> m1;
    map<string,int> m2 {{"Aman",400},{"Anil",500},{"Mukesh",600}};

    cout<<m2.at("Mukesh");
    cout<<m2["Aman"];

    //m2.clear();

    m2.insert(pair<string,int>("Shr",700));

    map <string,int>::iterator i1 = m2.begin();
    cout<<endl;

    while(i1 !=m2.end())
    {
        cout<<i1->first<<" "<<i1->second<<" ";
        i1++;
    }

}
