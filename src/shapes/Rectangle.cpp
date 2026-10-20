#include <shapes/Rectangle.hpp>


namespace ScreenLibrary {

template<class Color>
Rectangle<Color>::Rectangle(int x, int y, int width, int height, Color fill, Color stroke)
    : x(x), y(y), width(width), height(height), fill(fill), stroke(stroke) {}

template<class Color>
uint16_t Rectangle<Color>::getHeight() {
    return height;
}

template<class Color>
void Rectangle<Color>::setHeight(const uint16_t newHeight) {
    this->height = newHeight;
}

template<class Color>
uint16_t Rectangle<Color>::getWidth() {
    return width;
}

template<class Color>
void Rectangle<Color>::setWidth(const uint16_t newWidth) {
    this->width = newWidth;
}

template<class Color>
uint16_t Rectangle<Color>::getX() {
    return x;
}

template<class Color>
void Rectangle<Color>::setX(const uint16_t newX) {
    this->x = newX;
};

template<class Color>
uint16_t Rectangle<Color>::getY() {
    return y;
}

template<class Color>
void Rectangle<Color>::setY(const uint16_t newY) {
    this->y = newY;
}

template<class Color>
Color Rectangle<Color>::getFill() {
    return fill;
}

template<class Color>
void Rectangle<Color>::setFill(const Color color) {
    this->fill = color;
}

template<class Color>
Color Rectangle<Color>::getStroke() {
    return stroke;
}

template<class Color>
void Rectangle<Color>::setStroke(const Color color) {
    this->stroke = color;
}

template<class Color>
void Rectangle<Color>::draw(Driver::DisplayDriver<Color>& display) {
    display.fillRect(fill, x, y, width, height);
}
} // namespace ScreenLibrary
