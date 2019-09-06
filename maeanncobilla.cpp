#include <iostream>
#include <thread>
#include <string>
 using namespace std;
 
void bar1 (int x){
	int i=0;
	for(i=0; i < x; i++){
		cout << "This Thread1 is using a function \n";
	}
}

void bar2(int x){
	int i=0;
	for (i=0; i < x; i++){
		cout << "this  thread2 is using a function \n";
	}
}
void bar3(int x){
	int i=0;
	for (i=0; i < x; i++){
		cout << "this thread3 is using a function \n";
	}
}

void bar4(int x){
	int i=0;
	for (i=0; i < x; i++){
		cout << "this thread4 is using a function \n";
	}
}

int main() {
	
	int i = 0;
	thread th1(bar1, 4);
	thread th2(bar2, 4);
	thread th3(bar3, 4);
	thread th4(bar4, 4);
    
    for(i = 0; i< 10; i++) {
    	cout << "this print is from Main Method \n" ;
	}
	
	th1.join();
	th2.join();
	th3.join();
	th4.join();
     return 0;

}
