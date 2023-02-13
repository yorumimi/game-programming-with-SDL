#pragma once

namespace quince {

class Application final
{
public:
  Application() = default;

  Application(const Application&) = delete;
  Application& operator=(const Application&) = delete;
  Application(Application&&) = delete;
  Application& operator=(Application&&) = delete;

  ~Application();

  void Run();

private:

  //NOTE: クラスをコピー不可にしているので生ポインタでも良いと判断
  const class Impl* impl;
};

}  // namespace quince
