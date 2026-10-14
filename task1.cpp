#include <iostream>

using namespace std;
int main() {
    int t1,t2,t3; 
    cin >> t1 >> t2 >> t3;
    if (t1>= t2 && t1 >= t3) {
        cout << "понедельник" << t1 << endl;
    } else if (t2>=t3 && t2 >= t1){ 
        cout << "вторник" << t2 << endl;
    } else {
        cout << "среда" << t3 << endl; 
    }
    return 0;
}
    








    

