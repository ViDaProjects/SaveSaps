//
// Created by segalle on 08/11/2021.
//

#ifndef JOGO_MOVINGENTITY_H
#define JOGO_MOVINGENTITY_H

#include "Entity.h"
#include "Projectile.h"

namespace entities {
    namespace characters {

        class MovingEntity : public Entity {

        protected:

            int direction;
            int health;
            Projectile* fire;
            sf::Vector2f speed;
            bool ground;
            static float gravity;


        public:

            MovingEntity();

            virtual ~MovingEntity();

            virtual void run() = 0;

            virtual int getCollisionDamage() = 0;

            virtual void attack() = 0;

            void takeDamage(int dmg);

            virtual Entity* getProjectile() = 0;

            int getHealth();

            void fall();

            void setGround(bool on_ground);

            void setFallSpeed(float speed);

            void setHealth(int health);

        };
    }
}

#endif //JOGO_MOVINGENTITY_H
