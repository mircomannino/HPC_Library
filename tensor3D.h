#ifndef __TENSOR_3D__
#define __TENSOR_3D__

class Tensor3D {
private:
    double ***data;
    int depth;
    int heigth;
    int width;

public:
    Tensor3D() = delete;
    Tensor3D(const int depth_, const int heigth_, const int width_);
};

#endif
