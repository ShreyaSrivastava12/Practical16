#include<iostream>
using namespace std;

template <typename A, typename B, typename T>
T add(A num1, B num2)
{
    T ans = num1 + num2;
    return ans;
}

int main()
{
    
    cout << add<int, float, double>(4, 3.7f) << endl;
    
}
