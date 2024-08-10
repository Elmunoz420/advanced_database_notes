#include <string>
#include <iostream>
#include <vector>

//Esteban Munoz 

using namespace std;

// Definición de la estructura Archivo
struct Archivo {
    string name;
};

// Definición de la estructura Directorio
struct Directorio {
    string name;
    vector<Archivo> archivos;
    vector<Directorio> subdirectorios;
};

bool findFile(Directorio&dir, string&path, string&target){
    
    //caso base
    for(auto arch: dir.archivos){
        if(arch.name == target){
            path += "/" + dir.name;
            return true;
        }
    }

    for(auto& subdir: dir.subdirectorios){
        string subdirpath = path + "/" + dir.name;
        if(findFile(subdir,subdirpath,target)){
            path = subdirpath;
        }
    }
    return false;

}



int main(){
    Directorio sistemaDeArchivos = {
   "root",
   {
           {"archivo1.txt"},
           {"archivo2.txt"}
   },
   {
           {
               "subdir1",
               {
                   {"archivo3.txt"},
               },
               {
                   {
                       "subdir2",
                       {
                           {"target.txt"},
                           {"archivo4.txt"}
                       },
                       {}
                   }
               }
           },
           {"archivo5.txt"}
   }
};

string target = "archivo2.txt";
string path = "";

if (findFile(sistemaDeArchivos,path,target)){
    cout << "Archivo encontrado en: " << path <<"/"<< target;
    } else {
        cout << "Archivo no encontrado :("<< endl;
    }
};

