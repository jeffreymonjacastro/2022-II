#ifndef P2_CPP_FOLDER_H
#define P2_CPP_FOLDER_H

#include "Entry.h"

class Folder: public Entry{
private:
    vector<Entry*> entries;
public:
    Folder(){}
    Folder(string n, string p, int r, int w, int x): Entry(n, p, r, w, x){}

    // Métodos
    void add_entry(Entry* e){
        this->entries.push_back(e);
    }

    string list(){}

    int get_size(){return 0;}

    friend ostream& operator<<(ostream& out , Folder f){
        out<<f.get_read()<<f.get_write()<<f.get_execute()<<" "<<f.path;
    }
};


#endif //P2_CPP_FOLDER_H
