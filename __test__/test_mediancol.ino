#include <ArduinoUnit.h>

// Define the function you want to test
int Add(int a, int b) {
  return a + b;
}

// Define a test case
unittest(test_Add) {
  int result = Add(2, 3);
  assertEqual(result, 5);

  result = Add(-2, 3);
  assertEqual(result, 1);
}

// Run all tests
unittest_main()
