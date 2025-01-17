#ifndef MODEL_H
#define MODEL_H

#include <vector>
#include "geometry.h"

class Model {
private:

public:
    std::vector<Vec3f> verts_;
    std::vector<std::vector<int> > faces_;
    Model();
    ~Model();
    int nverts();
    int nfaces();
    Vec3f vert(int i);
    std::vector<int> face(int idx);
};

#endif // MODEL_H
