#ifndef SMARTARRAY_H
#define SMARTARRAY_H
#include <iostream>
#include <iomanip>
using namespace std;

class SmartArray
{
  public:
    SmartArray();
    SmartArray(int size);
    SmartArray(int x, int y);
    SmartArray(const SmartArray &s);
    ~SmartArray();
    int get_x();
    int get_y();
    void resize(int x, int y);
    friend ostream &operator<<(ostream &out, const SmartArray &s);
    friend istream &operator>>(istream &in, const SmartArray &s);
    friend SmartArray operator+(const SmartArray &s, const SmartArray &t);
  private:
    void declareArray();
    int** ary;
    int x;
    int y;
};

ostream& operator<<(ostream &out, const SmartArray &s)
{
    for (int i = 0; i < s.x; i++)
    {
        for (int j = 0; j < s.y; j++)
            out << s.ary[i][j] << "\t";
        out << endl;
    }
}
istream& operator>>(istream &in, const SmartArray &s)
{
    for (int i = 0; i < s.x; i++)
        for (int j = 0; j < s.y; j++)
            in >> s.ary[i][j];
}
#pragma endregion

#endif