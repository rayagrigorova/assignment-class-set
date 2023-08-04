#include <iostream>

#include "Program/Program.h"
#include "CreateFiles/CreateFiles.h"

int main() {
	createBinaryFiles();

	Program p;
	p.run();
}
