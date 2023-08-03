#include <bits/stdc++.h>
using namespace std;
int main()
{
    ifstream File("Text.txt");
    int word = 1;
    char ch;
    File.seekg(0, ios::beg);
    do
    {
        File.get(ch);
        if (ch == ' ' || ch == '\n')
            word++;
    } while (File);
    cout << "Total Words = " << word << endl;
    File.close();
}