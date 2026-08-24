#include <Box.hpp>

namespace ScreenLibrary {

Square::Square(int dimensions): dimensions(dimensions) {}

void Square::gross() {
    core::log::LOGGER.log(core::log::Logger::LogLevel::INFO, "Test");
}


}
