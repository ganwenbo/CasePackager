#include "FileGraph.h"

void FileGraph::Create(const std::string& fileName){
    SelectLineParser();
    OpenFile();
    UpdateCurrent();
    CloseFile();
    ProcessChirldren();
    
}