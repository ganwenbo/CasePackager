#include "LineParser.h"

class PreParser
{
private:
    /* data */
public:
    PreParser(std::shared_ptr<LineParser> lineParser , const  std::string& fileName);
    ~PreParser();
    void Parser(const std::string& fileName);
    bool OpenFile();
    bool GetChildFile();
private:
    std::shared_ptr<LineParser> lineParser_;
    std::string fileName_;
};

PreParser::PreParser(std::shared_ptr<LineParser> lineParser , const  std::string& fileName )
{

}

PreParser::~PreParser()
{
}
bool OpenFile(const std::string& fileName){

}
void Parser(const std::string& fileName){
    if (OpenFile(fileName)){
        return ;
    }
    GetChildFile();
    CloseFile();
 
}