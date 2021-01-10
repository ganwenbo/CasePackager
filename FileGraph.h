#include "FileNode.h"
#include "LineParser.h"

class FileGraph
{
private:
    /* data */
    std::shared_ptr<FileNode> topNode_;
    
    
public:
    FileGraph(const std::string& fileName);
    ~FileGraph();
     void Create(const std::string& fileName);
     bool OpenFile();
};

FileGraph::FileGraph(const std::string& fileName)
{

}

FileGraph::~FileGraph()
{
}
