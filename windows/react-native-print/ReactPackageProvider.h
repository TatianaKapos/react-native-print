#pragma once
#include "ReactPackageProvider.g.h"

using namespace winrt::Microsoft::ReactNative;

namespace winrt::react_native_print::implementation {

    struct ReactPackageProvider : ReactPackageProviderT<ReactPackageProvider> {
        ReactPackageProvider() = default;

        void CreatePackage(IReactPackageBuilder const& packageBuilder) noexcept;
    };

} // namespace winrt::react_native_print::implementation

namespace winrt::react_native_print::factory_implementation {

    struct ReactPackageProvider : ReactPackageProviderT<ReactPackageProvider, implementation::ReactPackageProvider> {};

} // namespace winrt::react_native_print::factory_implementation
