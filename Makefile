./bin/Judge.exe: ./bin/judge_member_list.o ./bin/show_member.o
	g++ -static -o bin/Judge bin/judge_member_list.o bin/show_member.o
./bin/judge_member_list.o: ./script/judge_member_list.cpp
	g++ -std=gnu++1y -O2 -c ./script/judge_member_list.cpp -o ./bin/judge_member_list.o
./bin/show_member.o: ./script/show_member.cpp
	g++ -std=gnu++1y -O2 -c ./script/show_member.cpp -o ./bin/show_member.o
running:
	cd bin
	./Judge
	cd ..
clean:
	rm \bin/Judge \bin/*.o
