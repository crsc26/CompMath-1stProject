/*  First Partial Project
    Christian Ricardo Sol�s Cort�s A01063685
    Samy Boucherit A01673900
    Juan Carlos Estebes Gonz�lez A01204421
    Javier Rodr�guez A01152572
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
                cout << "p[" << j << "]=" << p[j] << " t[" << i+j << "]=" << t[i+j] << endl;
                if(i+j >= t.size() || t[i+j] != p[j])
                {
                    cout << "false match" << endl;
                    match = false;
                    break;
                }
            }
            if(match)
            {
                cout << "match = " << i << endl;
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
