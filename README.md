# Programming Language CMP 172

This repo was reclassified into readable, one-file-per-problem solutions
of every problem solved by Saaiil Basnet in his first year, first
semester of CMP 172. Each `.c` file starts with a short comment
describing the problem it solves, and runs on its own (no commented-out
blocks to uncomment).

## 01_Basics - variables, input/output, expressions
- `days_to_years_months.c` - convert total days into years, months, remaining days
- `usd_to_npr.c` - convert US Dollar to Nepali Rupee
- `prime_or_composite.c` - check if a number is prime or composite
- `sum_of_two_numbers.c` - add two numbers
- `circle_area.c` - area of a circle from its radius

## 02_Conditionals - if / else
- `right_angle_triangle_check.c` - right-angle triangle check from 3 sides
- `circle_real_or_imaginary.c` - real vs imaginary circle from radius sign
- `smallest_of_two_numbers.c` - smaller of two numbers
- `odd_or_even.c` - odd/even check
- `positive_or_negative.c` - positive/negative check
- `prime_check_using_goto.c` - prime/composite check using goto
- `middle_of_three_numbers.c` - middle value of three numbers
- `middle_of_three_numbers_alt.c` - same, alternative compound-condition approach
- `square_or_rectangle_check.c` - square vs rectangle from length/breadth
- `prime_or_composite_for.c` - prime/composite check (for-loop)
- `perfect_square_check.c` - perfect square check
- `calculator_four_operations.c` - 4-operator calculator
- `number_to_month_name.c` - number → month name
- `number_to_day_name.c` - number → day name
- `circle_or_oval_check.c` - circle vs oval from two radii
- `equilateral_triangle_check.c` - equilateral triangle check
- `profit_or_loss_calculator.c` - profit/loss from cost & selling price

## 03_SwitchCase
- `circle_area_perimeter_switch.c` - circle area/perimeter menu
- `calculator_switch.c` - 4-operator calculator
- `day_name_switch.c` - number → day name
- `odd_even_switch.c` - odd/even check

## 04_Loops - while / do-while / for
- `prime_check_for_loop.c` - prime/composite check
- `right_half_pyramid.c` - right-half star pyramid
- `read_print_array.c` - read & print 5 numbers
- `multiples_of_five_while.c` / `multiples_of_five_for.c` - multiples of 5
- `odd_numbers_while.c` / `odd_up_to_100_for.c` / `odd_numbers_do_while.c` - odd number series
- `even_numbers_while.c` / `even_up_to_100_for.c` / `even_numbers_do_while.c` - even number series
- `first_ten_naturals_while.c` / `first_ten_naturals_for.c` / `first_ten_naturals_do_while.c` - first 10 naturals
- `odd_series_step_for.c` - 1,3,5,...,21 via `i += 2`
- `squares_series_for.c` - squares 1,4,9,...,100
- `multiples_of_seven_for.c` - multiples of 7
- `multiples_of_three_for.c` / `multiples_of_three_do_while.c` - multiples of 3
- `prime_composite_do_while.c` - prime/composite check (variant)
- `even_digits_of_number.c` - even digits of a multi-digit number
- `reverse_number.c` - reverse a multi-digit number
- `sum_of_digits.c` - sum of digits of a number
- `palindrome_check.c` - palindrome number check
- `perfect_number_check.c` - perfect number check
- `factorial_iterative.c` - factorial
- `multiplication_table.c` - multiplication table
- `sum_of_first_50_odd_numbers.c`, `sum_of_even_1_to_100.c`, `sum_of_first_10_naturals.c` - series sums

## 05_PatternsSeries - digit & number patterns
- `digit_shrink_54321.c`, `digit_shrink_12345.c` - shrinking digit series
- `digit_series_build_5_4.c` - growing digit series
- `squares_comma_series.c` - comma-separated squares series
- `repunit_series_5.c`, `repunit_series_3.c` - 5,55,555.. / 3,33,333..
- `powers_of_five_series.c` - 5,25,125,...
- `growing_digit_series.c` - 1,12,123,1234,12345
- `fibonacci_series.c` - Fibonacci series
- `square_number_pyramid.c` - 1,121,12321,... pyramid (arithmetic)
- `number_triangle_increasing_decreasing.c` - same pyramid (nested loops)
- `addition_grid.c` - 3x3 addition grid
- `digit_triangle_decreasing.c` / `_alt.c` - 12345/1234/123/12/1
- `digit_triangle_increasing.c` / `_alt.c` - 1/12/123/1234/12345

## 06_ArraysMatrices
- `matrix_addition_3x2.c` / `matrix_addition_2x2.c` - matrix addition
- `matrix_transpose_3x3.c` - matrix transpose
- `matrix_diagonals_3x3.c` - primary & secondary diagonals
- `matrix_read_print_2x2.c` - read & print a 2x2 matrix
- `array_reverse.c` - reverse a 5-element array
- `array_largest_of_ten.c` - largest of 10 numbers
- `array_sort_ascending.c` - sort 10 numbers ascending
- `array_sum_of_ten.c` - sum of 10 numbers
- `array_even_filter.c` - print only even numbers from an array
- `array_read_print_ten.c` - read & print 10 numbers

## 07_Strings
- `string_to_uppercase.c` - convert a word to uppercase
- `string_length.c` - length of a word
- `vowel_counter.c` - count vowels in a word

## 08_Functions - user-defined functions
- `circle_area_function_void_return.c` - circle area, function with no return value
- `circle_area_function_return.c` - circle area, function with return value
- `positive_negative_function_no_args.c` - pos/neg check, function with no arguments
- `fahrenheit_to_celsius_function.c` - temperature conversion
- `sum_of_two_numbers_function.c` - sum of two numbers via function
- `rectangle_area_function.c` - rectangle area via function
- `series_static_variable.c` - 1..10 series using a `static` variable
- `series_without_static.c` - same series, loop inside the function instead

## 09_Recursion
- `sum_upto_n_recursive.c` - sum 1..n (recursive)
- `sum_of_digits_recursive.c` - digit sum (recursive)
- `factorial_recursive.c` - factorial (recursive)
- `sum_of_digits_function.c` - digit sum (iterative function)
- `factorial_function.c` - factorial (iterative function)
- `doubling_series_function.c` - 2,4,6,...,20
- `fibonacci_function.c` - Fibonacci series
- `squares_series_function.c` - squares series

## 10_Structures
- `student_management_system.c` - struct-based student records: total, percentage, PASS/FAIL (fixed version)
- `student_struct_buggy.c` - same program, original attempt with its bugs left in for reference
- `student_record_single.c` - struct: a single student's roll, name, address, telephone
- `student_records_array.c` - array of structs: roll, name, address, telephone for multiple students
- `employee_account_records.c` - array of structs: employee id, name, salary
- `student_marks_single_struct.c` - struct: single student's marks, total, percentage
