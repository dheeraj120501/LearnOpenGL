#include<iostream>
#include"all_programs.h";

int main() {
	Program* p = new HelloTriangle();

	int res = p->run();

	delete p;

	return res;
}