#include "iostream"
#include <unordered_set.h>
class FileNode
{
private:
    /* data */
    std::string orgNameReadFromFile_;
    std::string orgFileName_;
    std::string orgAbsPath_;
    std::string newNameWrite2File_;
    std::string dstFileName_;
    std::string dstAbsPath_;
    std::unordered_set<FileNode*> childFileNode_;
    unsigned int inPortNum_;
public:
    FileNode(/* args */);
    ~FileNode();
};

FileNode::FileNode(/* args */)
{
}

FileNode::~FileNode()
{
}
