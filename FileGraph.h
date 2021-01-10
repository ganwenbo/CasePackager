#include "FileNode.h"
#include "shared_ptr.h"

class FileGraph
{
private:
    /* data */
    std::shared_ptr<FileNode> topNode_;
    void Create();
    
    
public:
    FileGraph(/* args */);
    ~FileGraph();
};

FileGraph::FileGraph(/* args */)
{
}

FileGraph::~FileGraph()
{
}
