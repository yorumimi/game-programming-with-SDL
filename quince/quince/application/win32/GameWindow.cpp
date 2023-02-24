#include "GameWindow.h"

namespace quince {
  
GameWindow::GameWindow()
{
  auto window = SDL_CreateWindow("test window", 100, 100, 1024, 768, SDL_WINDOW_OPENGL);
  
  mWindow = std::make_unique<SDL_Window*>(window);

  if (!mWindow)
  {
    SDL_Log("Failed to create window: %s", SDL_GetError());
  }
}

GameWindow::~GameWindow()
{
  SDL_DestroyWindow(*mWindow.get());
  mWindow.reset();
}

SDL_Window* GameWindow::GetWindowPointer()
{
  return *mWindow.get();
}

}  // namespace quince
