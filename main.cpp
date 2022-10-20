#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, position;
	cin >> n >> m;
	double max=0, t;

	    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        if (ceil(t / m) >= max)
        {
            position = i;
            max = ceil(t / m);
        }
    }

	cout << position << endl;
}