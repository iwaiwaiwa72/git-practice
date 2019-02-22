#include"show_member.h"

std::string members[100];

int count;

void init(){

    // Edit Here

    members[0] = "capra314cabra";
	  menbers[1] = "tk72HS";
    members[2] = "osmium1008";
  
    //

    count = 0;
}

std::string printNextMember(){
    return members[count++];
}
