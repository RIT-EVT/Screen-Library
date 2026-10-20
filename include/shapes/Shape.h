//
// Created by Taylor Lineman on 9/26/26.
//

#ifndef SCREEN_SHAPE_HPP
#define SCREEN_SHAPE_HPP
#include <Color.hpp>
#include <DisplayDriver.hpp>

#include <cstdint>

namespace ScreenLibrary {
template<class Color>
class Shape {
public:
    virtual ~Shape() = default;

    virtual uint16_t getX() = 0;
    virtual void setX(uint16_t x) = 0;

    virtual uint16_t getY() = 0;
    virtual void setY(uint16_t y) = 0;

    virtual uint16_t getWidth() = 0;
    virtual void setWidth(uint16_t width) = 0;

    virtual uint16_t getHeight() = 0;
    virtual void setHeight(uint16_t height) = 0;

    virtual Color getFill() = 0;
    virtual void setFill(Color color) = 0;

    virtual Color getStroke() = 0;
    virtual void setStroke(Color color) = 0;

    virtual void draw(Driver::DisplayDriver<Color> &display) = 0;
};
}
#endif // HUDLV2_SHAPE_H
