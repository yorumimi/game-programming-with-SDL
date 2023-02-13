#pragma once

namespace quince {

class GameHost final
{
public:
  GameHost() = default;

  GameHost(const GameHost&) = delete;
  GameHost& operator=(const GameHost&) = delete;
  GameHost(GameHost&&) = delete;
  GameHost& operator=(GameHost&&) = delete;

  ~GameHost() = default;

  void Run();
};

}  // namespace quince
