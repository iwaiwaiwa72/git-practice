#include"show_member.h"

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Judging..." << endl;
    init();
    ifstream ifs("../MemberList.txt");
    string str = "";
    while (getline(ifs, str)) {
        auto next_member_from_code = printNextMember();
        auto next_member_from_file = str;
        std::cout << next_member_from_code << " " << next_member_from_file << std::endl;
        if ( next_member_from_code != next_member_from_file ) {
            cout << "WA!" << endl;
            return -1;
        }
    }
    cout << "AC!!!" << endl;
    return 0;
}
