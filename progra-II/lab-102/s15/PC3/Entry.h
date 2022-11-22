#ifndef P2_CPP_ENTRY_H
#define P2_CPP_ENTRY_H

#include <iostream>
#include <vector>

using namespace std;

class Entry {
protected:
    string name;
    string path;
    int read;
    int write;
    int execute;
public:
    Entry(){}
    Entry(string n, string p, int r, int w, int x): name(n), path(p), read(r), write(w), execute(x){}

    virtual ~Entry(){}

    // Métodos
    char get_read(){
        if(this->read == 1) return 'R';
        else return '-';
    }

    char get_write(){
        if(this->write == 1) return 'W';
        else return '-';
    }

    char get_execute(){
        if(this->execute == 1) return 'X';
        else return '-';
    }

    string get_name(){return this->name;}

    string list(){return path;}

    virtual int get_size() = 0;


};

#endif //P2_CPP_ENTRY_H
