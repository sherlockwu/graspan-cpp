#include "../../include/vertex.h"

// Constructors
Vertex::Vertex(int idx, int id, std::vector<int> outEdges, std::vector<char> outEdgeValues)
{
	this->idx = idx;
	this->id = id;
	this->numOutEdges = 0;
	this->outEdges = outEdges;
	this->outEdgeValues = outEdgeValues;

	numOutEdges = outEdges.size();
}

// Getters
int Vertex::getVertexId() { return id; }
int Vertex::getVertexIdx() { return idx; }
int Vertex::getNumOutEdges() { return numOutEdges; }
std::vector<int> Vertex::getOutEdges() { return outEdges; }
std::vector<char> Vertex::getOutEdgeValues() { return outEdgeValues; }
int Vertex::getOutEdge(int ind) { return outEdges[ind]; }
char Vertex::getOutEdgeValue(int ind) { return outEdgeValues[ind]; }

// Setters
void Vertex::setNumOutEdges() {}
void Vertex::setOutEdges(std::vector<int> outEdges) { this->outEdges = outEdges; }
void Vertex::setOutEdgeValues(std::vector<char> outEdgeValues) { this->outEdgeValues = outEdgeValues; }

/**
 * Description: display a vertex as its id and the destination vertices it points to
 * with their grammar
 *
 * @return std::string output
 */
std::string Vertex::toString()
{
	std::stringstream output;

	output << std::endl << id << " ->  ";
	for (int i = 0; i < numOutEdges; i++)
		output << outEdges[i] << ", " << outEdgeValues[i] << ";  ";

	output << std::endl;

	return output.str();
}