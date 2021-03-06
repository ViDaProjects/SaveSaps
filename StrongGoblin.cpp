//
// Created by segalle on 11/22/21.
//

#include "StrongGoblin.h"

namespace entities{
    namespace characters{

        StrongGoblin::StrongGoblin() : Enemy(),
        attack_counter(0){
            sprite = assets->getSprite("strongGoblin");
            setId(strong_goblin_id);
            health = 75;
            speed.x = 1;
        }

        StrongGoblin::~StrongGoblin(){}

        void StrongGoblin::run() {
            walk();
            attack_counter++;
        }

        void StrongGoblin::walk() {
            p_position = player->getPosition();
            if(p_position.x + 50 > position.x){
                position.x += speed.x;
            }
            else{
                position.x -= speed.x;
            }
            fall();
            position.y += speed.y;
        }

        int StrongGoblin::getCollisionDamage() {
            if(attack_counter > attack_speed) {

                attack_counter = 0;
                return collision_damage;

            }

            return 0;

        }

        void StrongGoblin::attack() {

        }

        Entity *StrongGoblin::getProjectile() {
            return nullptr;
        }

        int StrongGoblin::attack_speed = 72;
        int StrongGoblin::collision_damage = 10;

    }
}