/*  First Partial Project
    Christian Ricardo Solís Cortés A01063685
    Samy Boucherit A01673900
    Juan Carlos Estebes González A01204421
    Javier Rodríguez A01152572
    Marco Luna A01209537
*/

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstdio>

using namespace std;

vector<int> dfaMatcher(string p, string t)
{
    vector<int> result =  vector<int>();
    for(int i = 0; i < t.size();i++)
    {
        if(t[i] == p[0])
        {
            bool match = true;
            for(int j=0;j < p.size();j++)
            {
                if(i+j < t.size() && t[i+j] != p[j])
                {
                    match = false;
                    break;
                }
            }
            if(match)
            {
                result.push_back(i);
            }
        }
    }
    return result;
}


int main()
{
    string cadena1, cadena2;
    cout << "P: ";
    cin >> cadena1;
    cout << "T: ";
    cin >> cadena2;
    vector<int> result = dfaMatcher(cadena1, cadena2);
    printResult(result);

    return 0;
}
