#include "display.hpp"

#include <SFML/System/Vector2.hpp>

using namespace chip8;

// Graphics
Display::Display()
  :m_window{sf::VideoMode(640, 320), "CppHIP-8"}
{
  m_display.fill(0);

  m_window.setPosition(sf::Vector2<int>{0, 0});

  m_window.clear(sf::Color::Black);
  m_window.display();
}

void Display::clear()
{
  m_display.fill(0);
  m_window.clear();
}

template <typename Begin, typename End>
void Display::write(const u8 t_x, const u8 t_y, Begin t_begin, End t_end)
{
  // TOOD: Something something start location
  m_display[t_x + t_y * m_width];
}

void Display::print()
{
  m_window.display();
}
