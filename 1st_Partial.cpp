/*  First Partial Project
    Christian Ricardo Solís Cortés A01063685
    Juan Carlos Estebes González A01204421
    Javier Rodríguez A01152572
    Marco Luna A01209537
*/

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstdio>
#include <set>

using namespace std;

void printDictionary(set<char> dict) {
    cout << "Dictionary = [";
    for(set<char>::iterator it = dict.begin(); it != dict.end(); it++) {
        cout << *it << " ";
    }
    cout << "]" << endl;
}

vector<int> dfaMatcher(string p, string t)
{
    vector<int> result =  vector<int>();
    set<char> dict = set<char>();
    for(int i = 0; i < t.size();i++)
    {
        dict.insert(t[i]);
        if(t[i] == p[0])
        {
            bool match = true;
            for(int j=0;j < p.size();j++)
            {
                dict.insert(p[j]);
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
    printDictionary(dict);
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

    return 0;
}
