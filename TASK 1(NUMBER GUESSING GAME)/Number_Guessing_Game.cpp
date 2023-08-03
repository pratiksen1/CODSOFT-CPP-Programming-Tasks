#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, choices, tries = 0;
    srand(time(0));
    num = rand() % 100 + 1;
    while (choices != num)
    {
        cout << "Please enter a number between 1 and 100 : ";
        cin >> choices;
        tries++;
        if (choices > num)
            cout << "The number you entered is TOO HIGH" << endl;
        else if (choices < num)
            cout << "The number you entered is TOO LOW" << endl;
        else
            cout << "Hurrah! You guess the correct number after " << tries << " tries.";
    }
}