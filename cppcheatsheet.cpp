// cheatsheet.hpp

#ifndef CHEATSHEET_HPP_
#define CHEATSHEET_HPP_

namespace cheat_sheet
{

// bad - unnecessary use of preprocessor define
#define GLOBAL_VARIABLE_1 1
// good - this variable is namespacable and functions exactly the same as a preprocessor define
static const unsigned int GLOBAL_VARIABLE_2 = 1;

///
/// This class doesn't do anything special, but its name is in title case so it follows the code style!!
///
class ExampleClass
{
public:
  ///
  /// Enumeration for demonstration purposes.
  ///
  enum ExampleEnum
  {
    EXAMPLE_OK = 1;     // What this enum value means.
    EXAMPLE_ERROR = 2;  // Same as above.
  }

  static const unsigned int STATIC_CONST_VARIABLE = 10;
  static unsigned int static_variable;

  static void static_function();

  ExampleClass();

  explicit ExampleClass(int parameter_one);

  ~ExampleClass();

  bool do_something(int& parameter_one);

  ///
  /// Function doesn't do anything, but the template parameter is title case.
  ///
  /// @tparam Param Template parameter.
  ///
  /// @return Always 0.
  ///
  template<class Param>
  int do_something()
  {
    return 0;
  }

protected:
  void do_something_protected(int& parameter_one);

private:
  // member variables
  int m_member_variable;

  // member functions
  void do_something_private();
};

} // namespace cheatsheet

#endif // CHEATSHEET_HPP_


// cheatsheet.cpp

#include "cheatsheet.hpp"

namespace cheat_sheet
{

///
/// A properly named constructor that would do something interresting if this wasn't a style guide.
///
ExampleClass::ExampleClass() :
m_member_variable(0)
{}

///
/// A single parameter constructor.
///
/// @param[in]  parameter_one Here's where one would define what this parameter is.
///
ExampleClass::ExampleClass(int parameter_one) :
m_member_variable(parameter_one)
{}

///
/// A destructor.
///
ExampleClass::~ExampleClass()
{}

///
/// This function would do a lot if this wasn't a style guide.
///
/// @param[io]  parameter_one The function both uses this parameter, and mutates it before returning.
/// @param[in]  parameter_two The function just uses this parameter.
///
/// @return true always.
///
bool ExampleClass::do_something(int& parameter_one, char parameter_two)
{
  return true;
}

///
/// Great well written function.
///
/// @param[out] parameter_one Ignore the value of this variable as passed, but set it before returning.
///
void ExampleClass::do_something_protected(int& parameter_one)
{}

///
/// Super important function
///
void ExampleClass::do_something_private()
{}

} // namespace cheat_sheet