#include "Priority_queue.h"

void Priority_queue::pop() {
	this->arr.erase(this->arr.begin());
}

bool Priority_queue::empty() const{
	return this->arr.empty();
}

int Priority_queue::size() const{
	return this->arr.size();
}

pair<string, int>& Priority_queue::front(){
	return this->arr[0];
}

const pair<string, int>& Priority_queue::front() const {
	return this->arr[0];
}

pair<string, int>& Priority_queue::back() {
	return this->arr[this->arr.size() - 1];
}

const pair<string, int>& Priority_queue::back() const {
	return this->arr[this->arr.size() - 1];
}

void Priority_queue::push(const string & doc, int priority) {

	for (int pos = 0; pos < this->arr.size(); pos++) {

		if (priority > this->arr[pos].second) {
			this->arr.insert(arr.begin() + pos, pair<string, int>(doc, priority));
			break;
		}

	}

}