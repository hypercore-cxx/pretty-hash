#ifndef HYPER_UTIL_PRETTY_HASH_H
#define HYPER_UTIL_PRETTY_HASH_H

#include <string>

#include "deps/datcxx/buffer/index.hxx"

namespace Hyper {
  namespace Util {
    std::string prettyHash(std::string str);
    std::string prettyHash(const Buffer<uint8_t>& buf);
  }
}

#endif
