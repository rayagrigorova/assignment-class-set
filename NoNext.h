#pragma once

#include <exception>

class NoNextException : public std::exception {
public:
	const char* what() const override {
		return "The class has no next element."; 
	}
};