#pragma once

//NOTE: �w�b�_�t�@�C���傫���Ȃ邩��SDL.h��include���Ȃ��Ƃ����Ȃ��t�@�C����1�ɂ܂Ƃ߂Ă��悢�H
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
  //NOTE: SDL_Window struct�Ƀ|�C���^���܂܂�Ă��邽��
  std::unique_ptr<SDL_Window*> mWindow;
};

}  // namespace quince
