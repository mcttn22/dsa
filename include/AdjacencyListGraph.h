#ifndef ADJACENCY_LIST_GRAPH_H  // Stops multiple inclusions of header file
#define ADJACENCY_LIST_GRAPH_H

#include <unordered_map>
#include <vector>
#include <string>

typedef std::unordered_map<std::string, std::vector<std::string>> AdjacencyList;

class AdjacencyListGraph {
	public:
		AdjacencyListGraph (AdjacencyList nodes);
		void breadth_first_traversal (std::string node);
		void depth_first_traversal (std::string node);
		void traverse (std::string traversal_type);
		AdjacencyList nodes;
		std::vector<std::string> visited;
};

#endif

