#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <iostream>
 
int main(void) {
  using namespace ftxui;
 
  // Define the document
  Element document =
    hbox({
      border(gauge(0.5)) | border
    });
 
  auto screen = Screen::Create(
    Dimension::Full(),       // Width
    Dimension::Fit(document) // Height
  );
  Render(screen, document);
  screen.Print();
 
  return 0;
}