#include "common.h"

void Sphere::subdivide(unsigned int num_subdivisions){
  //Subdivide triangles vertices array a num_subdivisions number of times
  //Make sure the lie on the surface of a sphere
  //And then populate normals
  

}



std::vector < vec4 > Sphere::subdivide_triangle(vec4 p1, vec4 p2, vec4 p3){
  std::vector < vec4 > triangles;

  //Subdivide a single triangle into 4 triangles
  

  return triangles;
  
}


Sphere::Sphere(){
  //Initial Diamond shape, do not edit
  vertices.resize(24);
  normals.resize(24, vec3(0.0,0.0,1.0));
  
  vertices[0]= vec4(0.0, 1.0, 0.0, 1.0);
  vertices[1]= vec4(1.0, 0.0, 0.0, 1.0);
  vertices[2]= vec4(0.0, 0.0, 1.0, 1.0);
  
  vertices[3]= vec4(1.0, 0.0, 0.0, 1.0);
  vertices[4]= vec4(0.0, -1.0, 0.0, 1.0);
  vertices[5]= vec4(0.0, 0.0, 1.0, 1.0);

  vertices[6]= vec4(0.0, -1.0, 0.0, 1.0);
  vertices[7]= vec4(-1.0, 0.0, 0.0, 1.0);
  vertices[8]= vec4(0.0, 0.0, 1.0, 1.0);
  
  vertices[9]= vec4(-1.0, 0.0, 0.0, 1.0);
  vertices[10]= vec4(0.0, 1.0, 0.0, 1.0);
  vertices[11]= vec4(0.0, 0.0, 1.0, 1.0);

  vertices[12]= vec4(1.0, 0.0, 0.0, 1.0);
  vertices[13]= vec4(0.0, 1.0, 0.0, 1.0);
  vertices[14]= vec4(0.0, 0.0, -1.0, 1.0);
  
  vertices[15]= vec4(0.0, 1.0, 0.0, 1.0);
  vertices[16]= vec4(-1.0, 0.0, 0.0, 1.0);
  vertices[17]= vec4(0.0, 0.0, -1.0, 1.0);

  vertices[18]= vec4(-1.0, 0.0, 0.0, 1.0);
  vertices[19]= vec4(0.0, -1.0, 0.0, 1.0);
  vertices[20]= vec4(0.0, 0.0, -1.0, 1.0);
  
  vertices[21]= vec4(0.0, -1.0, 0.0, 1.0);
  vertices[22]= vec4(1.0, 0.0, 0.0, 1.0);
  vertices[23]= vec4(0.0, 0.0, -1.0, 1.0);
}
