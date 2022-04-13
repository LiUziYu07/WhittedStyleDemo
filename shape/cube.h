//
// Created by lzy on 2022/4/13.
//

#ifndef WHITTEDSTYLEDEMO_CUBE_H
#define WHITTEDSTYLEDEMO_CUBE_H

#include "../hit/hittable.h"
#include "../Tool/vec3.h"

class cube : public hittable{
public:
    bool hit(const ray &r, double t_min, double t_max, hit_record &rec) const;
};

bool cube::hit(const ray &r, double t_min, double t_max, hit_record &rec) const {
    return true;
}
#endif //WHITTEDSTYLEDEMO_CUBE_H
