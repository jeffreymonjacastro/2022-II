#ifndef P2_CPP_FILE_H
#define P2_CPP_FILE_H

#include "Entry.h"

class File: public Entry{
private:
    string content;
public:
    File(){}
    File(string n, string p, int r, int w, int x, string c): Entry(n, p, r, w, x), content(c){}

    virtual ~File(){}

    string list(){return path;}

    int get_size(){return content.size();}
};

#endif //P2_CPP_FILE_H
