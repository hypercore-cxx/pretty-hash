#include "../deps/heapwolf/cxx-tap/index.hxx"
#include "../deps/datcxx/libsodium/index.hxx"
#include "../deps/datcxx/util-string/index.hxx"
#include "../index.hxx"

#include <iostream>

int main() {
  TAP::Test t;

  t.test("sanity", [](auto t) {
    t->ok(true, "true is true");
    t->end();
  });

  t.test("basic test", [](auto t) {
    using namespace Hyper;

    {
      auto r = Util::prettyHash(Sodium::randomBytes(32));
      t->ok(Util::String::test(r, "^\\w{6}\\.\\.\\w{2}$"), "32 bytes");
    }

    {
      auto r = Util::prettyHash(Sodium::randomBytes(16));
      t->ok(Util::String::test(r, "^\\w{6}\\.\\.\\w{2}$"), "16 bytes");
    }

    {
      auto r = Util::prettyHash(Sodium::randomBytes(4));
      t->ok(Util::String::test(r, "^\\w{8}$"), "4 bytes");
    }

    {
      auto r = Util::prettyHash(Sodium::randomBytes(1));
      t->ok(Util::String::test(r, "^\\w{2}$"), "1 byte");
    }

    t->end();
  });
}
