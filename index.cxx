#include <string>

#include "index.hxx"

namespace Hyper {
  namespace Util {
    std::string prettyHash(std::string s) {
      Buffer<uint8_t> buf(s);
      auto str = buf.toString("hex");

      if (str.size() > 8) {
        auto len = str.size();
        auto start = str.substr(0, 6);
        auto end = str.substr(len - 2);

        return start + ".." + end;
      }

      return str;
    }

    std::string prettyHash(Buffer<uint8_t>& buf) {
      return prettyHash(buf.toString());
    }
  }
}
