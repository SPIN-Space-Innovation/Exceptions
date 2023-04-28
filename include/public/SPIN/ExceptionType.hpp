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

#pragma once

#include <cstdint>

namespace SPIN
{
    /**
     * @brief <h1>Exception types used for error checking</h1>
     * Exception shall be used in conjuction with expected/unexpected
     * clauses in C++.
     * 
     * @examplecode
     * @code{.cpp}
     * std::expected<double, SPIN::ExceptionType> GetTemperature()
     * {
     *     return std::unexpected(SPIN::ExceptionType::NotSupportedException);
     * }
     * @endcode
     * 
     * @author richardbar
     */
    enum class ExceptionType : uint8_t
    {
        SystemException = 0x80, /*!< Serves as the base class for system exceptions namespace. */
        AccessViolationException, /*!< The exception that is thrown when there is an attempt to read or write protected memory. */
        AggregateException, /*!< Represents one or more errors that occur during application execution. */
        ApplicationException, /*!< Serves as the base class for application-defined exceptions. */
        ArgumentException, /*!< The exception that is thrown when one of the arguments provided to a method is not valid. */
        ArgumentNullException, /*!< The exception that is thrown when a null reference is passed to a method that does not accept it as a valid argument. */
        ArgumentOutOfRangeException, /*!< The exception that is thrown when the value of an argument is outside the allowable range of values as defined by the invoked method. */
        ArithmeticException, /*!< The exception that is thrown for errors in an arithmetic, casting, or conversion operation. */
        ContextMarshalException, /*!< The exception that is thrown when an attempt to marshal an object across a context boundary fails. */
        DataMisalignedException, /*!< The exception that is thrown when a unit of data is read from or written to an address that is not a multiple of the data size. This class cannot be inherited. */
        DivideByZeroException, /*!< The exception that is thrown when there is an attempt to divide an integral or Decimal value by zero. */
        DllNotFoundException, /*!< The exception that is thrown when a DLL specified in a DLL import cannot be found. */
        ExecutionEngineException, /*!< The exception that is thrown when there is an internal error in the execution engine. */
        FieldAccessException, /*!< The exception that is thrown when there is an invalid attempt to access a private or protected field inside a class. */
        FormatException, /*!< The exception that is thrown when the format of an argument is invalid, or when a composite format string is not well formed. */
        IndexOutOfRangeException, /*!< The exception that is thrown when an attempt is made to access an element of an array or collection with an index that is outside its bounds. */
        InsufficientMemoryException, /*!< The exception that is thrown when a check for sufficient available memory fails. This class cannot be inherited. */
        InvalidCastException, /*!< The exception that is thrown for invalid casting or explicit conversion. */
        InvalidOperationException, /*!< The exception that is thrown when a method call is invalid for the object's current state. */
        InvalidTimeZoneException, /*!< The exception that is thrown when time zone information is invalid. */
        MemberAccessException, /*!< The exception that is thrown when an attempt to access a class member fails. */
        MethodAccessException, /*!< The exception that is thrown when there is an invalid attempt to access a method, such as accessing a private method from partially trusted code. */
        MissingFieldException, /*!< The exception that is thrown when there is an attempt to dynamically access a field that does not exist. If a field in a class library has been removed or renamed, recompile any assemblies that reference that library. */
        MissingMemberException, /*!< The exception that is thrown when there is an attempt to dynamically access a class member that does not exist or that is not declared as public. If a member in a class library has been removed or renamed, recompile any assemblies that reference that library. */
        MissingMethodException, /*!< The exception that is thrown when there is an attempt to dynamically access a method that does not exist. */
        NotFiniteNumberException, /*!< The exception that is thrown when a floating-point value is positive infinity, negative infinity, or Not-a-Number (NaN). */
        NotImplementedException, /*!< The exception that is thrown when a requested method or operation is not implemented. */
        NotSupportedException, /*!< The exception that is thrown when an invoked method is not supported, or when there is an attempt to read, seek, or write to a stream that does not support the invoked functionality. */
        NullReferenceException, /*!< The exception that is thrown when there is an attempt to dereference a null object reference. */
        ObjectDisposedException, /*!< The exception that is thrown when an operation is performed on a disposed object. */
        OperationCanceledException, /*!< The exception that is thrown in a thread upon cancellation of an operation that the thread was executing. */
        OutOfMemoryException, /*!< The exception that is thrown when there is not enough memory to continue the execution of a program. */
        OverflowException, /*!< The exception that is thrown when an arithmetic, casting, or conversion operation in a checked context results in an overflow. */
        PlatformNotSupportedException, /*!< The exception that is thrown when a feature does not run on a particular platform. */
        StackOverflowException, /*!< The exception that is thrown when the execution stack exceeds the stack size. This class cannot be inherited. */
        TimeoutException, /*!< The exception that is thrown when the time allotted for a process or operation has expired. */
        TimeZoneNotFoundException, /*!< The exception that is thrown when a time zone cannot be found. */
        TypeAccessException, /*!< The exception that is thrown when a method attempts to use a type that it does not have access to. */
        TypeInitializationException, /*!< The exception that is thrown as a wrapper around the exception thrown by the class initializer. This class cannot be inherited. */
        UnauthorizedAccessException, /*!< The exception that is thrown when the operating system denies access because of an I/O error or a specific type of security error. */
        UriFormatException, /*!< The exception that is thrown when an invalid Uniform Resource Identifier (URI) is detected. */
        IOException = 0x40, /*!< The exception that is thrown when part of a file or directory cannot be found. */
        DirectoryNotFoundException, /*!< The exception that is thrown when part of a file or directory cannot be found. */
        DriveNotFoundException, /*!< The exception that is thrown when trying to access a drive or share that is not available. */
        EndOfStreamException, /*!< The exception that is thrown when reading is attempted past the end of a stream. */
        FileFormatException, /*!< The exception that is thrown when an input file or a data stream that is supposed to conform to a certain file format specification is malformed. */
        FileNotFoundException, /*!< The exception that is thrown when an attempt to access a file that does not exist on disk fails. */
        InternalBufferOverflowException, /*!< The exception thrown when the internal buffer overflows. */
        InvalidDataException, /*!< The exception that is thrown when a data stream is in an invalid format. */
        PathTooLongException, /*!< The exception that is thrown when a path or fully qualified file name is longer than the system-defined maximum length. */
    };
}