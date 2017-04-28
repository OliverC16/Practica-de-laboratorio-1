#include <iostream>

using namespace std;

    int sum( int array[], int n){
        int m = n-1;
        if (n==0){
            return 0;
        }
        if (n==1){
            return array[m];
        }
        else{
            return sum(array,m) + array[m];
        }
    }

int main()
{
    int n=5;
    int array[]={1,6,17,36,2};
    cout<<sum(array,n);
    return 0;

}
