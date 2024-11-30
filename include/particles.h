#pragma once

#include <SFML/Graphics.hpp>
#include "./matrices.h"

const float GRAVITY = 10.0,
            TTL     = 5.0,  // Time To Live
            SCALE   = 0.999;


class Particle : sf::Drawable {
    public:
        Particle(sf::RenderTarget& target, int num_points, sf::Vector2i position);

        void update(float dt);
        float get_ttl() const { return m_ttl; }
        bool almost_equal(double a, double b, double epsilon = 0.0001);
        void unit_tests();

        void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

    private:
        float m_ttl, m_radians_per_sec, m_vx, m_vy;
        int m_num_points;
        sf::View m_cartesian_plane;
        sf::Color m_cPrimary, m_cSecondary;
        Matrices::Matrix m_matrix;

        void rotate(double theta);
        void scale(double scalar);
        void translate(double x_shift, double y_shift);
};
