#include "Number.h"
#include <string.h>
#include <iostream>
using namespace std;

long Number::ConvertTo10(const string& input, int base)
{
    if (base < 2 || base > 36)
        return 0;

    bool isNegative = (input[0] == '-');

    int startIndex = input.length() - 1;
    int endIndex   = isNegative ? 1 : 0;

    long value     = 0;
    int digitValue = 1;

    for (int i = startIndex; i >= endIndex; --i)
    {
        char c = input[i];

        // Uppercase it - NOTE: could be done with std::toupper
        if (c >= 'a' && c <= 'z')
            c -= ('a' - 'A');

        // Convert char to int value - NOTE: could be done with std::atoi
        // 0-9
        if (c >= '0' && c <= '9')
            c -= '0';
        // A-Z
        else
            c = c - 'A' + 10;

        if (c >= base)
            return 0;

        // Get the base 10 value of this digit
        value += c * digitValue;

        // Each digit has value base^digit position - NOTE: this avoids pow
        digitValue *= base;
    }

    if (isNegative)
        value *= -1;

    return value;
}

// Convert base 10 to arbitrary base
// - Base must be between 2 and 36
// - If base is invalid, returns "0"
// - NOTE: this whole function could be done with itoa
string Number::ConvertFrom10(long value, int base)
{
    if (base < 2 || base > 36)
        return "0";

    bool isNegative = (value < 0);
    if (isNegative)
        value *= -1;

    // NOTE: it's probably possible to reserve string based on value
    string output;

    do
    {
        char digit = value % base;

        // Convert to appropriate base character
        // 0-9
        if (digit < 10)
            digit += '0';
        // A-Z
        else
            digit = digit + 'A' - 10;

        // Append digit to string (in reverse order)
        output += digit;

        value /= base;

    } while (value > 0);

    if (isNegative)
        output += '-';

    // Reverse the string - NOTE: could be done with std::reverse
    int len = output.size() - 1;
    for (int i = 0; i < len; ++i)
    {
        // Swap characters - NOTE: Could be done with std::swap
        char temp       = output[i];
        output[i]       = output[len - i];
        output[len - i] = temp;
    }

    return output;
}


Number::Number(const char* value, int base)
{
    this->base       = base;
    this->value_size = 10000;
    this->value      = new char[value_size];
    strcpy(this->value, value);
}
Number::Number(int value)
{
    strcpy(this->value, ConvertFrom10(value, this->base).c_str());
}

Number::Number(const char* value)
{
    strcpy(this->value, value);
}

Number::~Number()
{
    delete this->value;
}

char& Number::operator[](int index)
{
    return this->value[index];
    // // O: insert return statement here
}

Number& Number::operator+=(const Number& second)
{
    int max_base = this->base;
    if (second.base > this->base)
        max_base = second.base;
    int n1 = ConvertTo10(this->value,this->base);
    int n2 = ConvertTo10(second.value,second.base);
    int sum = n1 + n2;
    strcpy(this->value, ConvertFrom10(sum, max_base).c_str());
    this->base = max_base;
    return *this;


    // // O: insert return statement here
}

Number& Number::operator-=(const Number& second)
{
    int max_base = this->base;
    if (second.base > this->base)
        max_base = second.base;
    int n1  = ConvertTo10(this->value, this->base);
    int n2  = ConvertTo10(second.value, second.base);
    int dif = n1 - n2;
    strcpy(this->value, ConvertFrom10(dif, max_base).c_str());
    this->base = max_base;
    return *this;

    // // O: insert return statement here
}
Number& Number::operator--()
{
    strcpy(this->value, this->value + 1);
    // // O: insert return statement here
    return *this;
}
Number& Number::operator--(int)
{
    strcpy(this->value + strlen(this->value), this->value + strlen(this->value) + 1);
    // // O: insert return statement here
    return *this;
}
void Number::SwitchBase(int newBase)
{
    strcpy(this->value, ConvertFrom10(ConvertTo10(this->value,this->base),newBase).c_str());
    this->base = newBase;
}

void Number::Print()
{
    cout << this->value;
}

int Number::GetDigitsCount()
{
    return strlen(this->value);
}

int Number::GetBase()
{
    return this->base;
}
