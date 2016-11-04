//#pragma once
#ifndef _CLOCK_H_
#define _CLOCK_H_
class Clock
{
private:
    int sec_;
    int min_;
    int hour_;
public:
    Clock();
    Clock(int hour, int min, int sec);
    void reSet();
    void set(int hour, int min, int sec);
    void update();
    void update(int plus);
    void show();
    Clock operator +(const Clock & c);
    friend Clock operator*(int, const Clock &);
};
#endif