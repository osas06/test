#include<iostream>

using namespace std;

class vehicle{
    public:
    string marka;
    int model;
    int date;
    int speed;

    vehicle(string marka, int model, int date, int speed) : marka(marka), model(model), date(date), speed(speed) {}

    void accelerate(int amount)
    {
        speed+=amount;
    }

    void decelerate(int amount)
    {
        speed-=amount;
    }


};


int main()
{
 vehicle araba1("bmw",2000,2020,250);
    char marga[]="";
    cout<<""<<araba1.marka<<" "<<araba1.model<<" "<<araba1.date<<" "<<araba1.speed<<" "<<endl;
    araba1.accelerate(100);
    cout<<araba1.speed<<endl;
    cout<<"Enter marka :";
    cin>>marga;
    cout<<marga<<endl;
    vehicle araba2(marga,31,31,31);
    cout<<araba2.marka<<" "<<araba2.speed;
    int input;
    cin>>input;
    araba2.accelerate(input);
    cout<<endl<<araba2.speed;

    return 0;
}