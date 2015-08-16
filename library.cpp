#include <math.h>
#include <cmath>
#include <iostream>

using namespace std;

namespace ns {

    double pi = 3.14159265359;

    string getAnswer(string message) {
        string ans;
        cout << message << endl;
        cin >> ans;
        return ans;
    }

    int getNumberAnswer(string message) {
        int ans;
        cout << message << endl;
        cin >> ans;
        return ans;
    }

    void print(string message) {
        cout << message << endl;
    }

    void print_number(int number) {
        cout << number << endl;
    }

    void print_numberWithDecimal(double number) {
        cout << number << endl;
    }

    int add(int a, int b) {
        int ans;
        ans = a + b;
        return ans;
    }

    int subtract(int a, int b) {
        int ans;
        ans = a - b;
        return ans;
    }

    int multiply(int a, int b) {
        int ans;
        ans = a * b;
        return ans;
    }

    int divide(int a, int b) {
        int ans;
        ans = a / b;
        return ans;
    }

    int area_of_a_triangle(int height, int base) {
        int ans;
        ans = height * base / 2;
        return ans;
    }

    int area(int height, int width) {
        int ans;
        ans = height * width;
        return ans;
    }

    double area_of_circle(int radius) {
        double ans;
        ans = pi * (radius * radius);
        return ans;
    }

    double perimeter_of_circle(double diameter) {
        double ans;
        ans = pi * diameter;
        return ans;
    }

    /* double* quadratic_formula(int a, int b, int c) {
        double ans[2];
        double top_pos = -b + sqrt(4*a*c);
        double top_neg = -b - sqrt(4*a*c);
        ans[1] = top_pos / (2*a);
        ans[2] = top_neg / (2*a);
        return ans;
    } */

}
