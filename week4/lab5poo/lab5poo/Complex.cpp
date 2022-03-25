#include "Complex.h"

bool double_equals(double l, double r)
{
    return abs(l - r) < 0.001;
}

Complex operator+(const Complex& l, const Complex& r)
{
    return { l.GetX() + r.GetX() };
}

Complex operator-(const Complex& obj)
{
    return { l.GetX() - r.GetX() };
}

bool operator==(const Complex& l, const Complex& r)
{
    return l.GetX() == r.GetX();
}

Complex::Complex() : Complex(0, 0)
{
}

Complex::Complex(double real, double imag)
{
    real_data = real;
    imag_data = imag;
}

bool Complex::is_real() const
{
    return imag() == 0;
}

double Complex::real() const
{
    return real_data;
}

double Complex::imag() const
{
    return imag_data;
}

double Complex::abs() const
{
    return sqrt(real() * real() + imag() * imag());
}

Complex Complex::conjugate() const
{
    return { real(), -imag() };
}