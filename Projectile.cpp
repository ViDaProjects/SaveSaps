//
// Created by segalle on 11/19/21.
//

#include "Projectile.h"

namespace entities{


    Projectile::Projectile() : Entity(),
    damage(0),
    speed(0.5),
    direction(1){}

    Projectile::~Projectile(){}

    void Projectile::setDamage(int dmg) {
        damage = dmg;
    }

    void Projectile::run() {
        position.x += speed * (float)direction;
    }

    void Projectile::setDirection(int direction) {
        this->direction = direction;
    }

    int Projectile::getCollisionDamage() {
        return damage;
    }

}