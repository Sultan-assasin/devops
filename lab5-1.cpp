#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;


int main(){
    int a;
    cin >>a;
    int res = 0;

    for(int i = 0; i<a;i++){
        for(int j = 0; j<=i;j++){
            res+=i;
            std::cout << res << " ";
        }
    }

//    cout << res << endl;
    return 0;
}