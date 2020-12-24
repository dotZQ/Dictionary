//
//  main.cpp
//  DictionaryCPP
//
//  Created by ZQ314159 on 14/7/2563 BE.
//  Copyright © 2563 ZQ314159. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream in("file/file1.txt"); //-------------------FILE HERE PLS---------------
    bool isFound = false;
    vector<string>word;
    for(;;)
    {
        if (in.eof()) {
            break;
        }
        string a ;
        getline(in,a);
        word.push_back(a);
    }
    string input;
    int j=0;
    cout<<"Input your word :";
    cin>>input;
    transform(input.begin(),input.end(),input.begin(),::toupper);
    for (int i=0; i<word.size(); i+=2) {
        if (input == word[i]) {
            j = i;
            isFound = true;
            break;
        }
    }
    if (isFound == true) {
        cout<<word[j]<<endl;
        cout<<word[j+1]<<endl;
    }
    else
        cout<<"word not found"<<endl;
    return 0;
}
