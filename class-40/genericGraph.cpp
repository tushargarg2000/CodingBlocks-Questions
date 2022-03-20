// genericGraph.cpp
#include <iostream>
#include <list>
#include <unordered_map>
#include <queue>
#include <map>
using namespace std;

template<typename T>
class Graph {
	unordered_map<T, list<T> >adj;
public:


	void addEdge(T u, T v, bool biDir = true) {
		adj[u].push_back(v);

		if (biDir) {
			adj[v].push_back(u);
		}
		return;
	}

	void print() {

		for (auto i : adj) {
			cout << i.first << "-->";
			for (auto j : i.second) {
				cout << j << " ";
			}
			cout << endl;
		}
	}

	void BFS(T src) {
		unordered_map<T, bool>visited;
		queue<T>q;

		q.push(src);
		visited[src] = true;

		while (!q.empty()) {
			T front = q.front();
			q.pop();

			cout << front << " ";
			for (auto child : adj[front]) {
				if (!visited[child]) {
					visited[child] = true;
					q.push(child);
				}
			}
		}
		return;

	}

	int SSSP(T src, T dest) {

		map<T, int>dist;
		unordered_map<T, bool>visited;
		unordered_map<T, T>parent_array;
		queue<T>q;

		q.push(src);
		visited[src] = true;
		parent_array[src] = src;
		dist[src] = 0;
		while (!q.empty()) {
			T parent = q.front();
			q.pop();

			// cout << front << " ";
			for (auto child : adj[parent]) {
				if (!visited[child]) {
					visited[child] = true;
					q.push(child);
					dist[child] = dist[parent] + 1;
					parent_array[child] = parent;
				}
			}
		}

		// for (auto i : dist) {
		// 	cout << i.first << " " << i.second << endl;
		// }
		T dest_1 = dest;
		while (src != dest) {
			cout << dest << "<--";
			dest = parent_array[dest];
		}
		cout << src;
		cout << endl;
		return dist[dest_1];

	}

	bool isPresent(T u, T v) {
		for (auto i : adj[u]) {
			if (i == v)
				return 1;
		}
		return 0;
	}
};

int main() {

	Graph<int> g;

	// g.addEdge("putin", "trump");
	// g.addEdge("putin", "modi");
	// g.addEdge("putin", "pope");
	// g.addEdge("modi", "trump");
	// g.addEdge("trump", "modi");

	int board[50] = {0};
	board[2] = 13;
	board[5] = 2;
	board[9] = 18;
	board[18] = 11;
	board[17] = -13;
	board[20] = -14;
	board[24] = -8;
	board[25] = -10;
	board[32] = -2;
	board[34] = -22;

	for (int u = 0; u <= 36; u++) {
		for (int dice = 1; dice <= 6; dice++) {
			int v = board[u + dice] + u + dice;
			g.addEdge(u, v);
		}
	}

	// g.addEdge(0, 1);
	// g.addEdge(0, 4);
	// g.addEdge(1, 2);
	// g.addEdge(2, 4);
	// g.addEdge(4, 3);
	// g.addEdge(3, 5);
	// cout << g.isPresent(0, 11);
	// g.print();
	cout << g.SSSP(0, 36);


}








