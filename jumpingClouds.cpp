#include <iostream>
using namespace std;

const int SIZE = 100;

int jumpCounts(int arr[], int n);

int main()
{
    int arr[SIZE], n;

    cin >> n;

    cout << jumpCounts(arr, n) << endl;

    return 0;
}

int jumpCounts(int arr[], int n)
{
    int count = 0;

    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    if(arr[0] == 0)
    {
        for(int i = 0; i < n; i++)
        {
            if((i+1) < n)
            {
                if((arr[i] == 0) && (arr[i+1] == 0))
                {
                    if((i+2) < n)
                    {
                        if(arr[i+2] == 0)
                        {
                            i++;
                            count++;
                        }
                        else 
                            count++;
                    }
                    else
                        count++;
                }
                else if((arr[i] == 0) && (arr[i+1] == 1))  
                {
                    if((i+2) < n)
                    {
                        if(arr[i+2] == 0)
                        {
                            i++;
                            count++;
                        }
                    }
                }
                else if((arr[i] == 1) && (arr[i+1] == 0))
                {
                    if((i+2) < n)
                    {
                        if(arr[i+2] == 0)
                            count++;
                        else if(arr[i+2] == 1)
                        {
                            i++;
                            count++;
                        }
                    }
                }
            }
        }
    }

    return count;
}
