// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#include "pch.h"
#include "ReactPrintViewManager.h"
#include "NativeModules.h"
#include "ReactPrintView.h"

namespace winrt {
    using namespace Microsoft::ReactNative;
    using namespace Windows::Foundation::Collections;
    using namespace Windows::UI::Xaml;
}

namespace winrt::react_native_print::implementation {

    ReactPrintViewManager::ReactPrintViewManager() {}

    // IViewManager
    winrt::hstring ReactPrintViewManager::Name() noexcept {
        return L"RNCReactPrintWindows";
    }

    winrt::FrameworkElement ReactPrintViewManager::CreateView() noexcept {
        return winrt::react_native_print::ReactPrintView(m_reactContext);
    }

    // IViewManagerWithReactContext
    winrt::IReactContext ReactPrintViewManager::ReactContext() noexcept {
        return m_reactContext;
    }

    void ReactPrintViewManager::ReactContext(IReactContext reactContext) noexcept {
        m_reactContext = reactContext;
    }

    // IViewManagerWithNativeProperties
    IMapView<hstring, ViewManagerPropertyType> ReactPrintViewManager::NativeProps() noexcept {
        auto nativeProps = winrt::single_threaded_map<hstring, ViewManagerPropertyType>();

        return nativeProps.GetView();
    }

    void ReactPrintViewManager::UpdateProperties(
        FrameworkElement const& view,
        IJSValueReader const& propertyMapReader) noexcept {
        if (auto reactPrint = view.try_as<ReactPrintView>()) {
            reactPrint->UpdateProperties(propertyMapReader);
        }
    }

    // IViewManagerWithExportedEventTypeConstants
    ConstantProviderDelegate ReactPrintViewManager::ExportedCustomBubblingEventTypeConstants() noexcept {
        return nullptr;
    }

    ConstantProviderDelegate ReactPrintViewManager::ExportedCustomDirectEventTypeConstants() noexcept {
        return [](winrt::IJSValueWriter const& constantWriter) {
            WriteCustomDirectEventTypeConstant(constantWriter, "onChange");
        };
    }

} // namespace winrt::react_native_print::implementation