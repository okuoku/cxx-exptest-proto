cmake_minimum_required(VERSION 3.0)
project(exptest CXX)

set(CMAKE_CXX_STANDARD 17)

add_executable(exptest
    exptest.cxx)
add_executable(bad_alloc_replace
    bad_alloc_replace.cxx)
add_executable(bad_alloc_noreplace
    bad_alloc_noreplace.cxx)

add_executable(bad_optional_access
    bad_optional_access.cxx)
add_executable(bad_variant_access
    bad_variant_access.cxx)

add_executable(bad_cast
    bad_cast.cxx)

add_executable(bad_typeid
    bad_typeid.cxx)

add_executable(bad_function_call
    bad_function_call.cxx)

add_executable(bad_weak_ptr
    bad_weak_ptr.cxx)

add_executable(bad_any_cast
    bad_any_cast.cxx)

add_executable(throw_class
    throw_class.cxx)

add_executable(throw_class2
    throw_class2.cxx)

add_executable(throw_integer
    throw_integer.cxx)

# logic_error
# logic_error > future_error
# domain_error
# invalid_argument
# length_error
# out_of_range
# runtime_error
# runtime_error > ambiguous_local_time
# runtime_error > nonexistent_local_time
# runtime_error > format_error
# runtime_error > regex_error
# runtime_error > system_error
# system_error > filesystem_error
# system_error > ios_base::failure
# range_error
# overflow_error
# undeflow_error
