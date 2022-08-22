// Glaze Library
// For the license information refer to glaze.hpp

#include "glaze/api/impl.hpp"

#include "../interface.hpp"

DLL_EXPORT wrapper create_api() noexcept
{
   return {{{"my_api", []() { return glaze::make_api<my_api>(); }}}};
}