#include<iostream>
#include<fstream>

using namespace std;

class Book{
    private:
        int Bookid;
        char title[20];
        float price;
    
    public:

    void input();
    void display();
    void storeBook();
    void viewAllBooks();
    void editBook();
    void deleteBook();
};

void Book::input(){
    cout<<"Enter:\nBookid ";
    cin>>this->Bookid;
    cout<<"Tiltle ";
    cin>>this->title;
    cout<<"Price ";
    cin>>this->price;
}

void Book::display(){
    cout<<this->Bookid<<" "<<this->title<<" "<<this->price<<endl;
}

void Book:: storeBook(){
    ofstream fout;
    fout.open("bookfile.dat",ios::app);
    fout.write((char*)this,sizeof(*this));
    fout.close();
}

void Book:: viewAllBooks(){
    ifstream fin;
    fin.open("bookfile.dat",ios::in);
    fin.read((char*)this,sizeof(*this));
    while(!fin.eof()){
        display();
    fin.read((char*)this,sizeof(*this));
    }
    fin.close();
}

void Book::editBook(){
    Book b;
    int id;
    cout<<"Enter Bookid to edit";
    cin>>id;
    b.input();
    ofstream fout;
    ifstream fin;
    fout.open("tempfile.dat");
    fin.open("bookfile.dat");

    if(!fin)
        cout<<"file not found";
    else{
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof()){
            if(id==Bookid)
            fout.write((char*)&b,sizeof(b));
        else
            fout.write((char*)this,sizeof(*this));

        fin.read((char*)this,sizeof(*this));

        }
        fin.close();
        fout.close();
    }

    remove("bookfile.dat");
    rename("tempfile.dat","bookfile.dat");

}

void Book::deleteBook(){
    int id;
    cout<<"Enter Bookid to delete";
    cin>>id;
    
    ofstream fout;
    ifstream fin;
    fout.open("tempfile.dat");
    fin.open("bookfile.dat");

    if(!fin)
        cout<<"file not found";
    else{
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof()){

            if(id!=Bookid)
            fout.write((char*)this,sizeof(*this));

        fin.read((char*)this,sizeof(*this));

        }
        fin.close();
        fout.close();
    }

    remove("bookfile.dat");
    rename("tempfile.dat","bookfile.dat");
}

void updateCharacter(int pos, char newChar){
    fstream fout;
    fout.open("file1.txt");
    fout.seekp(pos);
    fout.write(&newChar,1);
    fout.close();
}

int main(){
    Book b1;

    // b1.input();
    // b1.storeBook();
    // b1.input();
    // b1.storeBook();
    // b1.input();
    // b1.storeBook();
    // b1.viewAllBooks();

    // updateCharacter(8,'L');

    // b1.editBook();
    // b1.viewAllBooks();

    // b1.deleteBook();
    // b1.viewAllBooks();

    
    return 0;
}