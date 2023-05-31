#include<iostream>
#include<vector>
#include<utility>
using namespace std;

main()
{
    // array <int,5> a1 = {10,20,30,40,50}
    // pair <string,int> p1;

    // p1.make_pair("shr",50);
    // p1.first();
    vector <int> v1;
    cout<<v1.capacity();

    vector <int> v2{90,34,56,23};
    cout<<endl<<v2.capacity();

    vector <int> v3(3);
    cout<<endl<<v3.capacity();
    v3.push_back(900);          //Push 900 element in last position
    cout<<endl<<v3.capacity(); //6
    v3.push_back(400);
    cout<<endl<<v3.capacity(); //6
    v3.push_back(4200);
    cout<<endl<<v3.capacity(); //6
    v3.push_back(4300);
    cout<<endl<<v3.capacity(); //12

    v1.push_back(4300);
    v1.push_back(4600);
    v1.push_back(4600);
    v1.pop_back();
    cout<<endl<<v1.capacity(); // 4
    cout<<endl<<v1.size();  // 2
    cout<<endl<<v1[1]; //2 //subscript

    v1.push_back(55);
    cout<<endl<<v1.front(); //4300
    cout<<endl<<v1.back();  //55

    vector <int> :: iterator i1 =v1.begin();

    v1.insert(i1+2,78);

    for(int i=0;i<v1.size();i++)
    {
        cout<<endl<<v1[i];
    }



}
