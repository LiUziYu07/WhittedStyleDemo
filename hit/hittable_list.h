//
// Created by lzy on 2022/4/12.
//

#ifndef WHITTEDSTYLEDEMO_HITTABLE_LIST_H
#define WHITTEDSTYLEDEMO_HITTABLE_LIST_H

#include "hittable.h"
#include <memory>
#include <vector>
#include "../Tool/sphere.h"

using std::shared_ptr;
using std::make_shared;

class hittable_list : public  hittable {
public:
    hittable_list() {}
    hittable_list(shared_ptr<hittable> object) { add(object); }

    void clear() { objects.clear(); }
    void add(shared_ptr<hittable> object) { objects.push_back(object); }

    virtual bool hit(
            const ray& r, double t_min, double t_max, hit_record& rec) const override;

public:
    std::vector<shared_ptr<hittable>> objects;
};

bool hittable_list::hit(const ray &r, double t_min, double t_max, hit_record &rec) const {
    hit_record tmp_rec;
    bool hit_anything = false;
    auto closest_so_far = t_max;

    for(const auto& object: objects){
        if(object -> hit(r, t_min, closest_so_far, tmp_rec)){
            hit_anything = true;
            closest_so_far = tmp_rec.t;
            rec = tmp_rec;
        }
    }
    return hit_anything;
}
#endif //WHITTEDSTYLEDEMO_HITTABLE_LIST_H
