#pragma once

#include "winrt/Windows.UI.Xaml.h"
#include "winrt/Windows.UI.Xaml.Markup.h"
#include "winrt/Windows.UI.Xaml.Interop.h"
#include "winrt/Windows.UI.Xaml.Controls.Primitives.h"
#include "BlankUserControl.g.h"
#include "PropertyChangeHelper.h"

namespace winrt::RuntimeComponent1::implementation
{
    struct BlankUserControl : BlankUserControlT<BlankUserControl>/*, PropertyChangeHelper<BlankUserControl>*/
    {
        BlankUserControl() 
        {
            InitializeComponent();
        }

        winrt::hstring MyProperty() { return m_content; }
        //void MyProperty(winrt::hstring value) { m_content = value; }

        winrt::hstring m_content = L"Initial";

        //void MenuFlyoutItem_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e)
        //{
        //    m_content = L"New content";
        //    raisePropertyChange(L"MyProperty");
        //}
    };
}

namespace winrt::RuntimeComponent1::factory_implementation 
{
    struct BlankUserControl : BlankUserControlT<BlankUserControl, implementation::BlankUserControl>
    {
    };
}
