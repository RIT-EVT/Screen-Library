#include <shapes/Rectangle.hpp>


namespace ScreenLibrary {

Rectangle::Rectangle(int x, int y, int width, int height, RGBA fill, RGBA stroke)
    : x(x), y(y), width(width), height(height), fill(fill), stroke(stroke) {}

uint16_t Rectangle::getHeight() {
    return height;
}

void Rectangle::setHeight(const uint16_t newHeight) {
    this->height = newHeight;
}

uint16_t Rectangle::getWidth() {
    return width;
}

void Rectangle::setWidth(const uint16_t newWidth) {
    this->width = newWidth;
}

uint16_t Rectangle::getX() {
    return x;
}

void Rectangle::setX(const uint16_t newX) {
    this->x = newX;
};

uint16_t Rectangle::getY() {
    return y;
}

void Rectangle::setY(const uint16_t newY) {
    this->y = newY;
}

RGBA Rectangle::getFill() {
    return fill;
}

void Rectangle::setFill(const RGBA color) {
    this->fill = color;
}

RGBA Rectangle::getStroke() {
    return stroke;
}

void Rectangle::setStroke(const RGBA color) {
    this->stroke = color;
}

void Rectangle::draw(Driver::DisplayDriver& display) {
    display.fillRect(fill, x, y, width, height);
}
} // namespace ScreenLibrary
