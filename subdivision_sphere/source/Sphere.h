//http://www.opengl-tutorial.org/beginners-tutorials/tutorial-7-model-loading/


#ifndef __SPHERE__
#define __SPHERE__

#include "common.h"

using namespace Angel;

class Sphere{
public:
  std::vector < vec4 > vertices;
  std::vector < vec3 > normals;
    
  
  Sphere();
  
  void subdivide(unsigned int num_subdivisions);
  
  unsigned int getNumTri(){ return vertices.size()/3; }

  bool loadOBJ(const char * path);
  
  friend std::ostream& operator << ( std::ostream& os, const Sphere& v ) {
    os << "Vertices:\n";
    for(unsigned int i=0; i < v.vertices.size(); i++){
      os << "\t\t" << v.vertices[i] << "\n";
    }
    os << "Normals:\n";
    for(unsigned int i=0; i < v.normals.size(); i++){
      os << "\t\t" << v.normals[i] << "\n";
    }
 
    return os;
  }
  
private:
  
  std::vector < vec4 > subdivide_triangle(vec4 p1, vec4 p2, vec4 p3);
  
};


#endif  //#ifndef __SPHERE__
