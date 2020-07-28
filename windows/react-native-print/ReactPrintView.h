// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

#include "ReactPrintView.g.h"
#include "winrt/Microsoft.ReactNative.h"
#include "NativeModules.h"

namespace winrt::react_native_print::implementation {

    class ReactPrintView : public ReactPrintViewT<ReactPrintView> {
    public:
        ReactPrintView(Microsoft::ReactNative::IReactContext const& reactContext);
        void UpdateProperties(Microsoft::ReactNative::IJSValueReader const& reader);

    private:
        Microsoft::ReactNative::IReactContext m_reactContext{ nullptr };
    };
} // namespace winrt::react_native_print::implementation

namespace winrt::react_native_print::factory_implementation {
    struct ReactPrintView : ReactPrintViewT<ReactPrintView, implementation::ReactPrintView> {};
} // namespace winrt::react_native_print::factory_implementation
