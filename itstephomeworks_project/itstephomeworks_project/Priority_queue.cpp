#include "Priority_queue.h"

void Priority_queue::pop() {

}

bool Priority_queue::empty() const{
	return 1;
}

int Priority_queue::size() const{
	return 0;
}

pair<string, int>& Priority_queue::front()
{
	// TODO: �������� ����� �������� return
}

const pair<string, int>& Priority_queue::front() const {
	// TODO: �������� ����� �������� return
}

pair<string, int>& Priority_queue::back() {
	// TODO: �������� ����� �������� return
}

const pair<string, int>& Priority_queue::back() const {
	// TODO: �������� ����� �������� return
}

void Priority_queue::push(string & doc, int & priority) {

	for (int pos = 0; pos < this->arr.size(); pos++) {

		if (priority > this->arr[pos].second) {
			this->arr.insert(arr.begin() + pos, pair<string, int>(doc, priority));
			break;
		}

	}

}