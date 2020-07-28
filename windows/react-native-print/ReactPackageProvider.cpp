#include "pch.h"
#include "ReactPackageProvider.h"
#include "ReactPackageProvider.g.cpp"
#include "ReactPrintViewManager.h"

using namespace winrt::Microsoft::ReactNative;

namespace winrt::react_native_print::implementation {

    void ReactPackageProvider::CreatePackage(IReactPackageBuilder const& packageBuilder) noexcept {
        packageBuilder.AddViewManager(L"ReactPrintViewManager", []() { return winrt::make<ReactPrintViewManager>(); });
    }

} // namespace winrt::react_native_print::implementation
