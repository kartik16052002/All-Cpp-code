#include<iostream>

using namespace std;

class Item{
    private:
        int a,b;
    public:
        Item(){};
        Item(int x, int y){
            a=x; b=y;
        }

        void input(){
            cin>>a>>b;
        }

        void display(){
            cout<<"a="<<a<<" b="<<b<<endl;
        }

        // operator overloading 
        Item operator+(Item i){
            Item temp;
            temp.a = a + i.a;
            temp.b = b + i.b;
            return temp;
        }

        // friend function 
        friend void add(Item);

};

void add(Item i1, Item i2){
    (i1+i2).display();
}

int main(){
    Item i1(10,10),i2(20,20),i3(50,50);
    add(i1,i2);
    return 0;
}