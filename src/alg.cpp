// Copyright 2021 NNTU-CS
 #include <iostream>
using namespace std;
    void gcd (int a, int b)
    {
    while(a > 0 && b > 0)
    {
        if(a > b)
            a %= b;
 
        else
            b %= a;
    }
    cout << a+b << endl;
    }
int main()
{
    int a,b;
    cin>>a>>b;
    gcd(a,b);
    return 0;
}
}

