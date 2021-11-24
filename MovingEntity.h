//
// Created by segalle on 08/11/2021.
//

#ifndef JOGO_MOVINGENTITY_H
#define JOGO_MOVINGENTITY_H

#include "Entity.h"
#include "Projectile.h"

namespace entities {
    namespace characters {

        enum Direction {
            Left,
            Right
        };

        class MovingEntity : public Entity {

        protected:

            int direction;
            int health;
            int lives;
            Projectile* fire;

        public:

            MovingEntity();

            ~MovingEntity();

            virtual void run() = 0;

            virtual int getCollisionDamage() = 0;

            virtual void attack() = 0;

            void move(sf::Vector2f amount);

            void setLives(int life);

            void loseLives();

            int getLives();

            void takeDamage(int dmg);

            Entity* getProjectile();

        };
    }
}

#endif //JOGO_MOVINGENTITY_H
