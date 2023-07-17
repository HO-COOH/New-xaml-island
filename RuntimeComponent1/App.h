#pragma once

#include "App.g.h"
#include "app.base.h"

namespace winrt::RuntimeComponent1::implementation
{
    struct App : AppT2<App>
    {
        App() 
        {
            // Xaml objects should not call InitializeComponent during construction.
            // See https://github.com/microsoft/cppwinrt/tree/master/nuget#initializecomponent
        }

        ~App()
        {
        }
    };
}

namespace winrt::RuntimeComponent1::factory_implementation
{
    struct App : AppT<App, implementation::App>
    {
    };
}
