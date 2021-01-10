#include "iostream"
#include <unordered_set.h>
#include <unordered_map.h>
#include <shared_ptr.h>
#include "Position.h"
class FileNode
{
    public:
    typedef std::string Var;
    typedef std::string FileName;
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
    std::unordered_map<Var, FileName> VarMap_;
    Position::Lang lang_;
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
