#pragma once

//NOTE: ヘッダファイル大きくなるからSDL.hをincludeしないといけないファイルは1つにまとめてもよい？
#include "build/windows/_deps/sdl2-src/include/SDL.h"

#include <memory>

namespace quince {

class GameWindow final
{
public:
  GameWindow();

  ~GameWindow();

  [[nodiscard]] SDL_Window* GetWindowPointer();

private:
  //NOTE: SDL_Window structにポインタが含まれているため
  std::unique_ptr<SDL_Window*> mWindow;
};

}  // namespace quince
