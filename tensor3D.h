#ifndef __TENSOR_3D__
#define __TENSOR_3D__

class Tensor3D {
private:
    float ***data;
    int depth;
    int heigth;
    int width;

public:
    Tensor3D() = delete();
    Tensor3D(const int depth_, const int heigth_, const width_);
}

#endif
