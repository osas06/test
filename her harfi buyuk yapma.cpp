#include<iostream>

using namespace std;

// ascii table'da küçük harf= büyük harf + 32 dir.

int main()
{
    string sen;
    bool spacecheck=false;
    cout<<"Metin girin :"<<endl;
    getline(cin,sen);
    int size=sen.length();
    sen[0]-=32;
    for(int i=0;i<size;i++)
    {

        if( spacecheck==true)
        {
            sen[i]-=32;
            spacecheck=false;

        }
        if(sen[i]==' ')
        {
            spacecheck=true;
        }

    }
    cout<<""<<sen;






    return 0;
}