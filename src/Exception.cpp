/** \if false
 * MIT License
 * 
 * Copyright (c) 2023 SPIN - Space Innovation
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 * \endif
 */

#include "SPIN/Exception.hpp"

#include <string>

SPIN::Exception::Exception(const SPIN::Exception& exception)
{
    this->_exceptionType = exception._exceptionType;
    this->_exceptionTypeString = exception._exceptionTypeString;
    this->_message = exception._message;
}

SPIN::Exception::Exception(SPIN::Exception&& exception)
{
    this->_exceptionType = exception._exceptionType;
    this->_exceptionTypeString = exception._exceptionTypeString;
    this->_message = exception._message;
}

SPIN::ExceptionType SPIN::Exception::GetExceptionType() const
{
    return this->_exceptionType;
}

std::string SPIN::Exception::GetMessage() const
{
    return this->_message;
}

SPIN::Exception& SPIN::Exception::operator=(const SPIN::Exception& exception)
{
    this->_exceptionType = exception._exceptionType;
    this->_exceptionTypeString = exception._exceptionTypeString;
    this->_message = exception._message;

    return *this;
}

SPIN::Exception& SPIN::Exception::operator=(SPIN::Exception&& exception)
{
    this->_exceptionType = exception._exceptionType;
    this->_exceptionTypeString = exception._exceptionTypeString;
    this->_message = exception._message;

    return *this;
}

std::string SPIN::Exception::ToString() const
{
    return "[" + this->_exceptionTypeString + "]: " + this->_message;
}
