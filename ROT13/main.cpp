#include <iostream>

using namespace std;

string coderROT13(string input)
{
    for(unsigned i = 0; i < input.size(); ++i)
    {
        if(tolower(input[i]) + 13 <= 'z')
        {
            input[i] += 13;
        }
        else
        {
            input[i] -= 13;
        }
    }

    return input;
}

string decoderROT13(string input)
{
    for(unsigned i = 0; i < input.size(); ++i)
    {
        if(tolower(input[i]) - 13 >= 'a')
        {
            input[i] -= 13;
        }
        else
        {
            input[i] += 13;
        }
    }

    return input;
}

int main()
{
    bool result = true;

    for(char i = 'a'; i <= 'z'; ++i)
    {
        if(decoderROT13(coderROT13(string(1,i))) != string(1,i))
        {
            result = false;
        }
    }

    if(result)
    {
        cout << "TEST 1: SUCCESS!\n";
    }
    else
    {
        cout << "TEST 1: FAILED!\n";
    }

    for(char i = 'A'; i <= 'Z'; ++i)
    {
        if(decoderROT13(coderROT13(string(1,i))) != string(1,i))
        {
            result = false;
        }
    }

    if(result)
    {
        cout << "TEST 2: SUCCESS!\n";
    }
    else
    {
        cout << "TEST 2: FAILED!\n";
    }

    return 0;
}
