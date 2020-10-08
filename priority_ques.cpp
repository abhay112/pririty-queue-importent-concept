// people standing in bank line you have to give priority by their age
// or you have to print top 3 most old person in queue
#include <bits/stdc++.h>
using namespace std;
class person {
public:
	string name;
	int age;
	person() {

	}
	person(string s, int n) {
		name = s;
		age = n;
	}

};

class personCompare {
public:
	bool operator()(person a, person b) {
		return a.age < b.age;
	}
};

int main() {
	int n;
	cin >> n;
	priority_queue<person, vector<person>, personCompare> pq; // stl does not know how to handel two person
	// so we make another class to handel that
	// STL does not accept function it accept class
	for (int i = 0; i < n; i++) {
		string s;
		int n;
		cin >> s >> n;
		person p(s, n);
		pq.push(p);
	}
	int k = 3;
	for (int i = 0; i < k; i++) {
		person p = pq.top();
		cout << p.name << " ";
		pq.pop();
	}
}