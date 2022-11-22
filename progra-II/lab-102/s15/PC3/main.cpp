#include "Entry.h"
#include "Folder.h"
#include "File.h"
#include <cstdio>


int main(){
    char type1;
    string path;
    int read1, write1, exe1;

    cout<<"Welcome"<<endl;

    cin>>type1>>path>>read1>>write1>>exe1;

    cout<<type1<<path<<read1<<write1<<exe1<<endl;

    Folder root(path, path, read1, write1, exe1);

    // Files y folder
    int n;
    cin>>n;

    for (int i = 0; i < n; ++i) {
        char type;
        string name;
        int read, write, exe;
        string content_file;

        cin>>type>>name>>read>>write>>exe>>content_file;

        string npath = path + "/" + name;

        cout<<npath<<endl;

        if(type == 'D'){
            Folder* new_folder = new Folder(name, npath, read, write, exe);
            root.add_entry(new_folder);
        } else if (type == 'F'){
            File* new_file = new File(name, npath, read, write, exe, content_file);
            root.add_entry(new_file);
        }
    }

    cout<<root;
    root.list();

    return 0;
}