// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#include "pch.h"
#include "JSValueXaml.h"
#include "ReactPrintView.h"
#include "ReactPrintView.g.cpp"

namespace winrt {
    using namespace Microsoft::ReactNative;
    using namespace Windows::Foundation;
    using namespace Windows::Foundation::Metadata;
    using namespace Windows::UI;
    using namespace Windows::UI::Xaml;
    using namespace Windows::UI::Xaml::Controls;
    using namespace Windows::UI::Xaml::Input;
    using namespace Windows::UI::Xaml::Media;
    using namespace Windows::UI::Xaml::Printing;
} // namespace winrt

namespace winrt::react_native_print::implementation {

    ReactPrintView::ReactPrintView(winrt::IReactContext const& reactContext) : m_reactContext(reactContext) {
        //Added for readibility, 0/100 is progressbar default

    }

    void ReactPrintView::UpdateProperties(winrt::IJSValueReader const& reader) {
        auto const& propertyMap = JSValueObject::ReadFrom(reader);
        for (auto const& pair : propertyMap) {
            
        }
    }
} // namespace winrt::react_native_print::implementation
