// graphs.cpp
#include <iostream>
#include <list>

using namespace std;

class Graph {
	int n;
	list<int> *adj;
public:
	Graph(int N) {
		n = N;
		adj = new list<int>[n];
	}

	void addEdge(int u, int v, bool biDir = true) {
		adj[u].push_back(v);

		if (biDir) {
			adj[v].push_back(u);
		}
		return;
	}

	void print() {

		for (int i = 0; i < n; i++) {
			// adj[i] // list
			cout << i << "-->";
			for (auto j : adj[i]) {
				cout << j << " ";
			}
			cout << endl;
		}
	}
};

int main() {

	Graph g(5);

	g.addEdge(0, 1);
	g.addEdge(0, 4);
	g.addEdge(1, 4);
	g.addEdge(1, 3);
	g.addEdge(1, 2);
	g.addEdge(2, 3);
	g.addEdge(3, 4);

	g.print();


}








