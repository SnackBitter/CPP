#include <stdio.h>
#include <iostream>

using namespace std;
enum Day
{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};
enum Weather
{
    Sunny,
    Rainy,
    Cloudy
};
struct DayInfo
{
    enum Day day;
    enum Weather weather;
};

bool canTravel(DayInfo data)
{
    if (data.day == Saturday || data.day == Sunday){
        if(data.weather == Sunny){
            return true;
        }
    }
    return false;
}

int main(){
    DayInfo goodDay = {Sunday,Sunny};
    DayInfo badDay = {Monday,Rainy};

	cout<<boolalpha;
    cout<<"goodDay is "<<canTravel(goodDay)<<" for travel"<<endl;
    cout<<"badDay is "<<canTravel(badDay)<<" for travel"<<endl;

    return 0;
}
