#include "analyser.h"

Analyser::Analyser(std::string name_,
                   std::string initList)
    : QObject(){
    name = name_;

    std::istringstream iss(initList);

    std::string tmp1;
    std::string tmp2;
    std::string temp;
    QDate tmp3;
    std::string tmp4;
    double tmp5;
    double tmp6;


    while(!iss.eof()){
        iss >> tmp1;
        iss >> tmp2;
        iss >> temp;
        tmp3.fromString(QString::fromStdString(temp),"yyyyMMdd");
        iss >> tmp4;
        iss >> tmp5;
        iss >> tmp6;

        Analysis *tmp = new Analysis(tmp1,tmp2,tmp3,tmp4,tmp5,tmp6);
        analyses.push_back(tmp);
    }
}

bool Analyser::compareNames(std::string comparsion){
    return name == comparsion;
}

