#include"show_member.h"

std::string members[100];

int count;

void init(){

    // Edit Here

    members[0] = "capra314cabra";
    members[1] = "tk72HS";
    members[2] = "osmium1008";
    members[3] = "kaage";
    members[4] = "TMJN";
    members[5] = "anmichi";
    members[6] = "Kaisei705";
    members[7] = "ZRK";
    members[8] = "Thistle";
    members[9] = "mutuhuhihusenonu";
  
    //

    count = 0;
}

std::string printNextMember(){
    return members[count++];
}
