#include <iostream>
#include "clock.h"
using namespace std;
    Clock::Clock()
    {
        hour_ = 0;
        min_ = 0;
        sec_ = 0;
    }
    Clock::Clock(int hour, int min, int sec) :sec_(sec), min_(min), hour_(hour)
    {
        
    }
    void Clock::reSet()
    {
        hour_ = 0;
        min_ = 0;
        sec_ = 0;
    }
    void Clock::set(int hour, int min, int sec)
    {
        hour_ = hour;
        min_ = min;
        sec_ = sec;
    }
    void Clock::update()
    {
        sec_ += 1;
        if(sec_ >= 60)
        {
            min_ += 1;
            sec_ = sec_ % 60;
        }
        if(min_ >= 60)
        {
            hour_ += 1;
            min_ = min_ % 60;
        }
        if(hour_ >= 24)
        {
            hour_ = 0;
        }
    }
    void Clock::update(int plus)
    {
        sec_ += plus;
        if(sec_ >= 60)
        {
            min_ += 1;
            sec_ = sec_ % 60;
        }
        if(min_ >= 60)
        {
            hour_ += 1;
            min_ = min_ % 60;
        }
        if(hour_ >= 24)
        {
            hour_ = 0;
        }
    }
    Clock Clock::operator + (const Clock & c)
    {
        Clock sum;
        sum.hour_ = hour_ + c.hour_;
        sum.min_ = min_ + c.min_;
        sum.sec_ = sec_ + c.sec_;
        return sum;
    }     
    void Clock::show()
    {
        cout << hour_ << ":" << min_ << ":" << sec_ << endl;
    }
    Clock operator*(int n, const Clock & c)
    {
        Clock t;
        t.hour_ = n * c.hour_;
        t.min_ = n * c.min_;
        t.sec_ = n * c.sec_;
        t.update(0);
        return t;
    }