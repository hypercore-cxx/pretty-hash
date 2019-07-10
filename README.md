# SYNOPSIS
Output binary buffers as a nice shortened hex string

# USAGE
This module is designed to work with the [`datcxx`][0] build tool. To add this
module to your project us the following command...

```bash
build add datcxx/pretty-hash
```

# EXAMPLE

``c++

#include "../deps/datcxx/libsodium/index.hxx"
#include "../deps/datcxx/pretty-hash/index.hxx"

auto bytes = Hyper::Sodium::randomBytes(32);
Hyper::Util::prettyHash(bytes);

// => '0b0a97..f3'
```

[0]:https://github.com/datcxx/build
