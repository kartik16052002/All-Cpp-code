#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

void writing(char text[]){
    ofstream fout;
    fout.open("file1.txt",ios::out);
    fout<<text;
    fout.close();
}

void append(char text[]){
    ofstream fout;
    fout.open("file1.txt",ios::app);
    fout<<text;
    fout.close();
}

void reading(){
    char ch;
    ifstream fin;
    fin.open("file1.txt",ios::in);
    if(!fin)
        cout<<"File not found";
        else{
            ch=fin.get();
            while(!fin.eof()){
                cout<<ch;
                ch=fin.get();
            }
        fin.close();
        }
}

int main(){
    // writing("Started learning file handling");
    // append(" ,appending");
    reading();
    return 0;
}