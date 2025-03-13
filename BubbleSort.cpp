#include <iostream>
using namespace std;

int arr[15];
int n; //input jumlah data

void inputdata()
{
    while (true)
    {
        cout << "masukan jumlah data: ";
        cin >> n;
        
        if (n < 15){
            break;
        }
        else
        {
            cout << "jumlah data maksimal 15" << endl;
        }
    }

    cout << "===================" << endl;
    cout << "masukan data" << endl;
    cout << "===================" << endl;
    cout << endl;


    for (int i = 0; i < n; i++)
    {
        cout << "masukan data ke-" << i + 1 << "=";
        cin >> arr[i];
    }
}

void BubbleSort(){
    int pass = 1; //step 1
    do
    {
    
        for (int  j = 0; j <= n - 1 - pass; j++) //step 2
        {
            if(arr[j] > arr[j + 1]) //step 3
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    
        pass = pass + 1;
        
    } while (pass <= n - 1); //step 6
    
}

int main ()
{
    inputdata();
    BubbleSort();
}