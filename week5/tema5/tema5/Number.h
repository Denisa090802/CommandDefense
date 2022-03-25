#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>
#include <stdexcept>
class Number

{
  private:
    int base;
    char* value;
    int value_size;

    static std::string ConvertFrom10(long value, int base);
    static long ConvertTo10(const std::string& input, int base);
  public:
    Number(const char* value, int base); // where base is between 2 and 16
    Number(int value);
    Number(const char* value);

    ~Number();

    // add operators and copy/move constructor
    char& operator[](int);

    Number& operator+=(const Number& second);
    friend Number operator+(Number first, const Number& second)
    {
        first += second;
        return first;
    }

    
    Number& operator-=(const Number& second);
    friend Number operator-(Number first, const Number& second)
    {
        first -= second;
        return first;
    }

    friend bool operator>(Number const &left, Number const &right)
    {
        int a1 = ConvertTo10(left.value, left.base);
        int a2 = ConvertTo10(right.value, right.base);
        return a1 > a2;

    }

    Number& operator--();
    Number& operator--(int);



    void SwitchBase(int newBase);

    void Print();

    int GetDigitsCount(); // returns the number of digits for the current number

    int GetBase(); // returns the current base
};