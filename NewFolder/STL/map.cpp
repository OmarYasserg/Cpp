#include <iostream>
#include<map>
#include<unordered_map>
#include<string>
using namespace std;
int main()
{
/*     map<string, string> myDictionary;
 */
    unordered_map <string , string> myDictionary;
    myDictionary.insert(pair<string , string> ("Omar", "120"));
    myDictionary.insert( pair<string , string> ("Ahmed", "110"));
    myDictionary.insert(pair<string , string> ("Malek", "123"));
    cout<< myDictionary["Malek"] << endl;
    for(auto pair : myDictionary)
    {
        cout << pair.first << " - " << pair.second << endl;
    }
}