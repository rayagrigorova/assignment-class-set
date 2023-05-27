#include <iostream>

#include "Program.h"
#include "CreateFiles.h"

int main() {
	createBinaryFiles();

	Program p;
	p.run();
}
