#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const string FILENAME = "depths.txt";

int part1(int depth1, int depth2)
{
    return (depth2 > depth1) ? 1 : 0;
}

int part2(int depth1, int depth2, int depth3, int depth4)
{
    if (depth1 == 0 || depth2 == 0)
        return 0;
    return (depth1 + depth2 + depth3 < depth2 + depth3 + depth4) ? 1 : 0;
}

int main()
{
    int a = 0, b = 0;
    string input;
    int val1 = 0, val2 = 0, val3 = 0, val4 = 0;
    ifstream infile(FILENAME);
    infile >> input;
    val3 = stoi(input);
    while (infile >> input)
    {
        val4 = stoi(input);
        a += part1(val3, val4);
        b += part2(val1, val2, val3, val4);

        val1 = val2;
        val2 = val3;
        val3 = val4;
    }
    cout << "Part 1: " << a << "\nPart2: " << b << endl;
}