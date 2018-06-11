#include<iostream>
using namespace std;
class Alarm{    
    ;
};
class Door{
    public:
    void Lock();
    void unlock();

};
class AlarmDoor:public Door{
    Alarm A;      
public:
};