#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    string name;
    name = "Zaki";
    string temp = name;
    
    int size = name.length();
    cout << size << endl;
    
    for (int i=0; i<name.size(); i++)
        cout << name[i];
    
    cout << endl;
        
    name.append("Bambang",2,3);
    cout << name << endl;
    name = temp;
    
    name.append(5, 'a');
    cout << name << endl;
    name = temp;
    
    string str2 = "bambang";
    name.append(str2.begin()+2,str2.end());
    cout << name << endl;
    name = temp;
    
    name.append("Bambang");
    cout << name << endl;
    name = temp;
    
    bool ok;
    ok = name.compare("Zaki");
    cout << ok << endl;
    
    string word1 = "They said programming is easy";
    string temp1 = word1;
    string cari = "said";
    size_t found = word1.find(cari);
    cout << found << endl;
    
    string word2 = word1.substr(5,9);
    cout << word2 << endl;
    
    string word3 = "He";
    word1.replace(0,4,word3);
    cout << word1 << endl;
    word1 = temp1;
    
    string word4 = "C++ ";
    word1.insert(10,word4);
    cout << word1 << endl;
}
