[INFO] Random value test
  Format:    "%+04p"
  Expected:  ""+0xff" (ret: 5)"
  Actual:    ""0xff" (ret: 4)"
  Note:      Flag behavior with pointers may be handled differently
            across platforms or implementations

[INFO] Random value test
  Format:    "%  -p"
  Expected:  ""·0xff" (ret: 5)"
  Actual:    ""0xff" (ret: 4)"
  Note:      Flag behavior with pointers may be handled differently
            across platforms or implementations

[INFO] Lone percent
  Format:    "%"
  Expected:  """ (ret: 0)"
  Actual:    ""%" (ret: 1)"
  Note:      Edge case behavior may vary by implementation
[PASS] Double dot
[INFO] Just minus
  Format:    "%-"
  Expected:  """ (ret: 0)"
  Actual:    ""%-" (ret: 2)"
  Note:      Edge case behavior may vary by implementation
[INFO] Just plus
  Format:    "%+"
  Expected:  """ (ret: 0)"
  Actual:    ""%+" (ret: 2)"
  Note:      Edge case behavior may vary by implementation
[INFO] Just hash
  Format:    "%#"
  Expected:  """ (ret: 0)"
  Actual:    ""%#" (ret: 2)"
  Note:      Edge case behavior may vary by implementation
[INFO] Just zero
  Format:    "%0"
  Expected:  """ (ret: 0)"
  Actual:    ""%0" (ret: 2)"
  Note:      Edge case behavior may vary by implementation
[INFO] Just space
  Format:    "% "
  Expected:  """ (ret: 0)"
  Actual:    ""%·" (ret: 2)"
  Note:      Edge case behavior may vary by implementation

  [INFO] Space flag with pointer
  Format:    "% p"
  Expected:  ""·0xffff" (ret: 7)"
  Actual:    ""0xffff" (ret: 6)"
  Note:      Flag behavior with pointers may be handled differently
            across platforms or implementations
[INFO] Space and zero-padded pointer
  Format:    "% 016p"
  Expected:  ""·0x000000000ffff" (ret: 16)"
  Actual:    ""0x0000000000ffff" (ret: 16)"
  Note:      Flag behavior with pointers may be handled differently
            across platforms or implementations

            [INFO] Space with pointer
  Format:    "% p"
  Expected:  ""·0xffff" (ret: 7)"
  Actual:    ""0xffff" (ret: 6)"
  Note:      Flag behavior with pointers may be handled differently
            across platforms or implementations
[PASS] Zero-padded pointer
[INFO] Space and zero-padded pointer
  Format:    "% 016p"
  Expected:  ""·0x000000000ffff" (ret: 16)"
  Actual:    ""0x0000000000ffff" (ret: 16)"
  Note:      Flag behavior with pointers may be handled differently
            across platforms or implementations

[PLATFORM DIFF - PASS] All flags combined
  Format:    "%+#-020.10p"
  Expected:  "+0x7ffd227f0290·····" (ret: 20)
  Actual:    "0x7ffd227f0290······" (ret: 20)
  Note:      Difference in handling sign flags with pointers is platform-specific
  Pointer:   0x7ffd227f0290