#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    
    int num = 1;
    if(a%2 == 0)
    {
        a = a-1;
    }
    //works only upto maximum length of integer
    while(a--)
    {
        cout << num << " ";
        num = num + 2;
    }
	return 0;
}
