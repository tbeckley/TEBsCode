#include "SmartArray.h"

void SmartArray::declareArray()
{
    delete ary;
    ary = new int* [x];
    int ysize = y;

    for (int i = 0; i < x; i++)
    {
        ary[i] = new int[ysize];
    }
}

#pragma region Constructors and Destructors
SmartArray::SmartArray()
{
    x = 1;
    y = 1;
    declareArray();
}
SmartArray::SmartArray(int size)
{
    x = size;
    y = size;
    declareArray();
}
SmartArray::SmartArray(int _x, int _y)
{
    x = _x;
    y = _y;
    declareArray();
}
SmartArray::SmartArray(const SmartArray &s)
{
    x = s.x;
    y = s.y;
    declareArray();

    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
            ary[i][j] = s.ary[i][j];
}
SmartArray::~SmartArray()
{
    delete ary;
}
#pragma endregion

#pragma region Accessors
int SmartArray::get_x()
{
    return x;
}
int SmartArray::get_y()
{
    return y;
}

void SmartArray::resize(int _x, int _y)
{
    x=_x;
    y=_y;
    declareArray();
}
#pragma endregion

#pragma region Operators
ostream& operator<<(ostream &out, const SmartArray& s)
{
    for (int i = 0; i < s.x; i++)
    {
        for (int j = 0; j < s.y; j++)
        {
            out << s.ary[i][j] << "\t";
        }
        out << endl;
    }
}
istream& operator>>(istream &in, const SmartArray& s)
{
    for (int i = 0; i < s.x; i++)
        for (int j = 0; j < s.y; j++)
            in >> s.ary[i][j];
}
SmartArray operator+(const SmartArray& s, const SmartArray& t)
{
    SmartArray res(s.x, s.y);

    if(s.x==s.y&&t.x==t.y)
    {
        for(int i = 0; i < s.x; i++)
        {
            for(int j = 0; j < s.y; j++)
            {
                res.ary[i][j]=s.ary[i][j]+t.ary[i][j];
            }
        }
        return res;
    }
    else
    {
        cout << "Error adding SmartArrays of different sizes. Returned empty 1x1 array";
    }
    return SmartArray();
}
#pragma endregion