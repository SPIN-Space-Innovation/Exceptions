# MIT License
# 
# Copyright (c) 2023 SPIN - Space Innovation
# 
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
# 
# The above copyright notice and this permission notice shall be included in all
# copies or substantial portions of the Software.
# 
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.

set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/Exception.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/SystemException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/AccessViolationException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/AggregateException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/ApplicationException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/ArgumentException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/ArgumentNullException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/ArgumentOutOfRangeException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/ArithmeticException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/ContextMarshalException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/DataMisalignedException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/DivideByZeroException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/DllNotFoundException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/ExecutionEngineException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/FieldAccessException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/FormatException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/IndexOutOfRangeException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/InsufficientMemoryException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/InvalidCastException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/InvalidOperationException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/InvalidTimeZoneException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/MemberAccessException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/MethodAccessException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/MissingFieldException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/MissingMemberException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/MissingMethodException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/NotFiniteNumberException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/NotImplementedException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/NotSupportedException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/NullReferenceException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/ObjectDisposedException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/OperationCanceledException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/OutOfMemoryException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/OverflowException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/PlatformNotSupportedException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/StackOverflowException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/TimeoutException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/TimeZoneNotFoundException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/TypeAccessException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/TypeInitializationException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/UnauthorizedAccessException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/UriFormatException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/IOException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/DirectoryNotFoundException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/DriveNotFoundException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/EndOfStreamException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/FileFormatException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/FileNotFoundException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/InternalBufferOverflowException.cpp;${SPIN_Exceptions_SRC_CXX}")
