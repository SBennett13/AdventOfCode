#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const string FILENAME = "move.txt";

enum dir
{
    forw,
    down,
    up,
    unknown,
};

dir hashDir(string const &direction)
{
    if (direction == "forward")
        return forw;
    else if (direction == "down")
        return down;
    else if (direction == "up")
        return up;
    else
        return unknown;
}

int main()
{
    int a = 0, b = 0, p2a = 0, p2b = 0, p2c = 0;
    string direction;
    string samt;
    ifstream infile(FILENAME);

    while (infile >> direction >> samt)
    {
        int amt = stoi(samt);
        switch (hashDir(direction))
        {
        case forw:
            a += stoi(samt);
            p2a += amt;
            p2b += p2c * amt;
            break;
        case down:
            b += amt;
            p2c += amt;
            break;
        case up:
            b -= amt;
            p2c -= amt;
            break;
        default:
            break;
        }
    }

    cout << "Part 1: " << a * b << "\nPart 2: " << p2a * p2b << endl;
}
