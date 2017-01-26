// Triangle.cpp
// Triangle class with 3 Vertices using glm::vec3

#include "Triangle.hpp"

Triangle::Triangle(glm::vec3 vec1, glm::vec3 vec2, glm::vec3 vec3) : v1(vec1), v2(vec2), v3(vec3) {
}

Triangle::~Triangle(){
}

glm::vec3 Triangle::getV1(){
  return this->v1;
}

glm::vec3 Triangle::getV2(){
  return this->v2;
}

glm::vec3 Triangle::getV3(){
  return this->v3;
}

std::vector<glm::vec3> Triangle::getVertices(){
    std::vector<glm::vec3> vertices;
    
    vertices.push_back(getV1());
    vertices.push_back(getV2());
    vertices.push_back(getV3());
    
    
    return vertices;
}

