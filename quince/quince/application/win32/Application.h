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

  //NOTE: �N���X���R�s�[�s�ɂ��Ă���̂Ő��|�C���^�ł��ǂ��Ɣ��f
  const class Impl* impl;
};

}  // namespace quince
