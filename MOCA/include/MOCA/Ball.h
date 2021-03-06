#ifndef MOCA_BALL_H
#define MOCA_BALL_H

#include "Solid.h"

/**
 * @class Ball
 * @brief Represente une sphere (balle)
 *
 * Represente un solide qui possede un rayon constant, donc un solide en forme
 * de sphere (ou encore en forme de balle, wouf).
 */
class Ball : public Solid {

public:
    Ball();
    Ball(double radius, bool isHollow = false);
    virtual ~Ball();

    // Getters et setters
    virtual arma::mat33 getInertia() const;
    virtual double getVolume() const;

    double getRadius() const { return _radius; }
    void setRadius(double radius) { _radius = radius; }

private:
    double _radius;
};

#endif // MOCA_BALL_H
