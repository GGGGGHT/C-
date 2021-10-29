// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.

//
// Created by Admin on 2021/10/27.
//

#ifndef C__DYNAMICMEMORY_H
#define C__DYNAMICMEMORY_H

#include <vector>
#include <iostream>
#include <memory>
#include <stdexcept>

class dynamicMemory {

};


class StrBlob {
public:
	typedef std::vector<std::string>::size_type size_type;

	StrBlob();

	StrBlob(std::initializer_list<std::string> il);

	size_type size() const { return data->size(); }

	bool empty() const { return data->empty(); }

	void push_back(const std::string &t) { data->push_back(t); }

	void pop_back();

	std::string &front();

	std::string &back();

private:
	std::shared_ptr<std::vector<std::string>> data;

	void check(size_type i, const std::string &msg) const;
};

StrBlob::StrBlob() : data(std::make_shared<std::vector<std::string>>()) {}

StrBlob::StrBlob(std::initializer_list<std::string> il) : data(std::make_shared<std::vector<std::string>>(il)) {}

void StrBlob::check(size_type i, const std::string &msg) const {
	if (i >= data->size()) {
		throw std::out_of_range(msg);
	}
}

std::string &StrBlob::front() {
	check(0, "front on empty StrBlob");

	return data->front();
}

std::string &StrBlob::back() {
	check(0, "back on empty StrBlob");

	return data->back();
}

void StrBlob::pop_back() {
	check(0, "pop_back on empty StrBlob");
	data->pop_back();
}

#endif //C__DYNAMICMEMORY_H
