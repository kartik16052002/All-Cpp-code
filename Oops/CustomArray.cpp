#include <iostream>

using namespace std;

class CustomArray
{
private:
    int arr[10];
    void swap(int &x, int &y)
    {
        int temp = x;
        x = y;
        y = temp;
    }

public:
    void inputArrayElement()
    {
        cout << "Enter array elements:\n";
        for (int i = 0; i < 10; i++)
        {
            cin >> arr[i];
        }
    }
    int findMaxElement()
    {
        int maxElement = arr[0];
        for (int i = 1; i < 10; i++)
        {
            maxElement = max(maxElement, arr[i]);
        }
        return maxElement;
    }

    void sort()
    {
        for (int j = 9; j > 1; j--)
        {
            for (int i = 0; i < 9; i++)
            {
                if (arr[i] > arr[i + 1])
                    swap(arr[i], arr[i + 1]);
            }
        }
    }

    void editElement(int index, int newData){
        arr[index] = newData;
    }

    int sumOfElements(){
        int sum = 0;
        for(int i=0;i<10;i++){
            sum+=arr[i];
        }
        return sum;
    }

    int averageOfElements(){
        int sum = 0,avg=0;
        for(int i=0;i<10;i++){
            sum+=arr[i];
        }
        avg = sum/10;
        return avg;
    }
    
    void display(){
        for(int i=0;i<10;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
};

int main(){
    CustomArray at;
    at.inputArrayElement();
    at.sort();
    at.display();
    return 0;
}