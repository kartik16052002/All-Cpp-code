#include <iostream>

using namespace std;

class complexno
{
private:
    int real;
    int img;

public:
    complexno(){}
    complexno(complexno &c){
        real = c.real + 5;
        img = c.img + 5;
    }
    void input()
    {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter img part: ";
        cin >> img;
    }

    void display()
    {
        cout << real;
        if (img > 0)
            cout << "+" << img << "j" << endl;
        else
            cout << img << "j" << endl;
    }

    complexno add(complexno c){
        complexno temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
};

int main()
{
    complexno c1, c2, c3;
    // c1.input();
    // c2.input();
    // c3=c1.add(c2);
    c3.input();
    c3.display();
    cout<<"Check:\n";
    complexno c4=c3;
    
    c4.display();

    return 0;
}
