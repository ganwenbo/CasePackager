#include <iostream>
#include "FileNode.h"
#include "Position.h"

class LineParser
{
private:
    /* data */
public:
    LineParser(/* args */);
    virtual bool OpenFile(const std::string& fileName) = 0;
    Position GetCurrentPosition();
    
    void Parser(const std::string& lineStr){
        ParserFile();
        ParserVar();
    }

    virtual ~LineParser();

private:
    std::shared_ptr<FileNode> curFile_;

};

LineParser::LineParser(/* args */)
{
}

LineParser::~LineParser()
{
}
 