/**
 * Header file defines the functions to evaluate arithmetic expressions
 */

#ifndef ASSIGN_4_EVAL_EXPR_H
#define ASSIGN_4_EVAL_EXPR_H

#include <string>
using namespace std;

/**
 * @brief Helper function to check if the string is an operand.
 * @param num The element to be checking.
 * @return true if is a valid ASCII value (0-9).
 * @return false if is a valid ASCII value (0-9).
 */
bool is_operand(char num);

/**
 * @brief Helper function to check if the string is an operator.
 * @param op The element to be checking.
 * @return true if is a +, -, *, or / sign.
 * @return false if is anything else.
 */
bool is_operator(char op);

/**
 * @brief Helper function to perform the operation on the expression.
 * @param a .
 * @param b .
 * @param op .
 * @return the result of the performed operation.
 * @return -1 if the symbol is unknown.
 */
float operation(float a, float b, char op);

/**
 * @brief Evaluate a postfix expression
 * @param postfix_expr The input expression in the postfix format.
 * @param result gets the evaluated value of the expression (by reference).
 * @return true if expression is a valid postfix expression and evaluation is done without error, otherwise false.
 */
bool evalPostfixExpr(string postfix_expr, float& result);

/**
 * @brief Convert an infix expression to an equivalent postfix expression
 * @param infix_expr The input expression in the infix format.
 * @return the converted postfix expression. If the input infix expression is invalid, return an empty string "";
 */
string convertInfixToPostfix(string infix_expr);

/**
 * @brief Evaluate an infix expression. It's converted to a postfix expression first and then evaluated
 * @param infix_expr The input expression in the infix format.
 * @param result gets the evaluated value of the expression (by reference).
 * @return true if expression is valid and evaluation is done without error, otherwise false.
 */
bool evalInfixExpr(string infix_expr, float& result);

#endif //ASSIGN_4_EVAL_EXPR_H
