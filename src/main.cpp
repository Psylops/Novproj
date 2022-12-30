#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <iostream>
 
int main(void) {
  using namespace ftxui;
  float percentage = 0;

 for (int i; i<11; i++){
    percentage += 0.1;
 }
  // Define the document
  Element document =
    hbox({
      border(gauge(percentage)) | border
      Toggle();
    });
  auto screen = Screen::Create(
    Dimension::Full(),       // Width
    Dimension::Fit(document) // Height
  );
  Render(screen, document);
  screen.Print();
  return 0;
}