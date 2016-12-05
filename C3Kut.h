#ifndef EXAM_H
#define EXAM_H

class C3Kut {
private:
    float katet1, katet2;
    friend float fh (C3Kut *k);
public:
    C3Kut(float k1, float k2);
    C3Kut(C3Kut *k);
};

#endif
