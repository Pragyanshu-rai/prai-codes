#include<iostream>
using namespace std;

float Average(char str[], int len){

    float avg=0;
    
    for(int index =0; index<len; index++){

        avg += (int)str[index];

    }


    return avg/len;
}

int main(){

    int len;

    cin >> len;

    char str[len];

    for(int index=0; index<len; index++)
        cin >> str[index];

    cout << Average(str, len);

    return 0;

}