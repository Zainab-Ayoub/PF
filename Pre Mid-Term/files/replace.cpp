//C++ Code
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string replaceStr = "line"; //String to replace
    string replacementStr = "word";	//String To replace with
    ifstream filein("text.txt"); //File to read from
    ofstream fileout("temp.txt"); //Temporary file
    string strTemp;

 while(filein >> strTemp)//taking every word and comparing with replaceStr
    {
        if(strTemp == replaceStr)//if your word found then replace
        {
            strTemp = replacementStr;
        }
        strTemp += " ";
        fileout << strTemp;//output everything to fileout(temp.txt)
    }
    filein.close();
    fileout.close();
    return 0;
}