#include <iostream>
#include <fstream>
#include <string>
#include <bitset>
using namespace std;

const string FILENAME = "codes.txt";

int main()
{
    string in;
    string majority = "";
    ifstream infile(FILENAME);
    infile >> in;
    int len = in.length();
    int ones[len] = {0};
    for (int i = 0; i < len; i++)
    {
        if (in[i] == '1')
            ones[i]++;
    }
    while (infile >> in)
    {
        for (int i = 0; i < len; i++)
        {
            if (in[i] == '1')
                ones[i]++;
        }
    }

    for (int i = 0; i < len; i++)
    {
        if (ones[i] > 500)
            majority += "1";
        else
            majority += "0";
    }
    bitset<12> g{majority};
    int ga = static_cast<int>(g.to_ulong());
    g.flip();
    int ep = static_cast<int>(g.to_ulong());
    cout << "Gamma: " << ga << "\tEpsilon: " << ep << endl;
    cout << "Part 1: " << ga * ep << endl;
}