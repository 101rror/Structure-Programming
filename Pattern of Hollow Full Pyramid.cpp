///Pattern of Hollow Full Pyramid

/**
*
*   author :: 101rror
*
**/

#include <bits/stdc++.h>

using namespace std;

#define MAX 100
#define infinity 1000000000000000LL
#define all(x) (x).begin(),(x).end()
#define FastRead ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod(x,m) ((x%m)+m)%m;                               //101rror
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL))

#define T while(t--)
#define YES             cout << "YES";
#define NO              cout << "NO";
#define Yes             cout << "Yes";
#define No              cout << "No";
#define OK              cout << "OK";
#define ERROR           cout << "ERROR";
#define Ok              cout << "Ok";
#define Error           cout << "Error";
#define nl              cout << endl;
#define spa             cout << " ";

#define fi first
#define se second
#define ll long long
#define vc vector<char>
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define pop pop_back
#define sc set<char>
#define si set<int>
#define sll set<ll>
#define sin st.insert
#define scl(st) st.clear()
#define eb emplace_back
#define all(x) (x).begin(),(x).end()

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    fastread();

    int n;
    printf("Enter a Number : ");
    cin >> n;
    cout << endl;

    int k = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }
        while (k != (2 * i - 1))
        {
            if (k == 0 || k == (2 * i - 2))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
            k++;
        }
        k = 0;
        cout << endl;
    }

    for (int i = 0; i < (2 * n - 1); i++)
    {
        cout << "*";
    }


    return 0;
}