#include "storager.h"
#include <fstream>

Storager::Storager(QObject *parent) : QObject(parent)
{
    std::fstream outFile;
    std::string file = "analysesList.txt";
    char *writable = new char[file.size() + 1];
    std::copy(file.begin(), file.end(), writable);
    outFile.open("analysesList.txt");
    std::string tmp1;
    std::string tmp2;
    std::string tmp3;

    while(!outFile.eof() && tmp1 != "Name:"){
        outFile >> tmp1;
    }
    while(!outFile.eof()){
        outFile >> tmp1;
        outFile >> tmp2;
        while(tmp2 != "Analyses:"){
            tmp1 = tmp1 + " " + tmp2;
            outFile >> tmp2;
        }
        outFile >> tmp3;
        tmp2 = "";
        while(!outFile.eof() && (tmp3 != "Name:" || tmp3 != "end")){
            tmp2 = tmp2 + tmp3 + " ";
            outFile >> tmp3;
        }
        Analyser * temp = new Analyser(tmp1, tmp2);
        analysts.push_back(temp);
    }
}

