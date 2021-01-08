#include <iostream>
#include <string>
using namespace std;

int main() {
    while (true) {
        string tmp;
        cout << "39.106.62.46:6379> ";
        // cin>>tmp;
        getline(cin, tmp);
        // cout << tmp;
        if(tmp == "keys *") {
            cout << "1) SinAnGenTo0_KitTenCrAfT_dATa\n";
        } else if (tmp == "get SinAnGenTo0_KitTenCrAfT_dATa") {
            cout << "KYEBREVTCK3JEUHJ4TOKSO5E3OM4CBWRIGYIZWZ=\n";
        } else {
            cout << "\n";
        }
    }
}