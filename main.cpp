#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <stdio.h>
#include <sstream>
#include <string>
#include <algorithm>
#include <fstream>
using namespace std;


int main() {
    string fname;
    string htag="#";
    string in_tag="";
    string tag="";
    
    cin>>in_tag;
    // removing the quotes from the tag
    for(int i=1;i<(in_tag.length()-1);i++)
    {
        tag+=in_tag[i];   
    }
    // converting the whole hashtag to upper case
    for(int i=0;i<tag.length();i++)
    {
        tag[i]=toupper(tag[i]);
    }
    // concatenating with # symbol
    
    htag += tag;   
    
    cin.ignore();
    // taking file name
    cin>>fname;
    const char * fileName=fname.c_str();
    // openeing file in read mode
    
    ifstream file(fileName);
    
    // counter variable for total tags
    int hashTags=0;
    // string to temporarily store each word of file
    string temp="";
    
    // reading file till end 
    while(!file.eof())   
    {
        // taking word by word
        file>>temp;
        if((temp[temp.length()-1])== '"')
        {
            string temp1="";
            for(int i=0;i<temp.length()-1;i++)
                temp1 += temp[i]; 
            temp=temp1;
        }
        // converting each word to uppercase for comparison with hash tag
        for(int i=0;i<temp.length();i++)
            temp[i] = toupper(temp[i]);
        // comparison of word with tag and increment in counter
        if(!temp.compare(htag))
            hashTags++;
    }
    cout<<hashTags;
    return 0;
}
