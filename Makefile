./bin/Judge.exe: ./bin/judge_member_list.o ./bin/show_member.o
	cd bin & g++ -static -o Judge.exe judge_member_list.o show_member.o & cd ../
./bin/judge_member_list.o: ./script/judge_member_list.cpp
	g++ -std=gnu++1y -O2 -c ./script/judge_member_list.cpp -o ./bin/judge_member_list.o
./bin/show_member.o: ./script/show_member.cpp
	g++ -std=gnu++1y -O2 -c ./script/show_member.cpp -o ./bin/show_member.o

clean:
	cd ./bin & rm *.o & del Judge.exe & cd ../