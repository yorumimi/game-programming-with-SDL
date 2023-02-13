#include "Application.h"

#include "GameHost.h"
#include "GameWindow.h"

#include <memory>

namespace quince {

Application::~Application()
{
  if (impl != nullptr)
  {
    delete impl;
  }
}

void Application::Run()
{
  auto gameWindow = std::make_unique<GameWindow>();

  auto gameHost = std::make_unique<GameHost>();
  gameHost->Run();


  //if ()
  //{
  //  gameHost.reset();
  //}
}

}  // namespace quince
