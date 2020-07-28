#include "pch.h"
#include "ReactPackageProvider.h"
#include "ReactPackageProvider.g.cpp"
#include "RNCPrint.h"

using namespace winrt::Microsoft::ReactNative;

namespace winrt::react_native_print::implementation {

    void ReactPackageProvider::CreatePackage(IReactPackageBuilder const& packageBuilder) noexcept {
        AddAttributedModules(packageBuilder);
    }

} // namespace winrt::react_native_print::implementation
