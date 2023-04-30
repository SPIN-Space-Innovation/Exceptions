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

set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/IOException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/DirectoryNotFoundException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/DriveNotFoundException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/EndOfStreamException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/FileFormatException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/FileNotFoundException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/InternalBufferOverflowException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/InvalidDataException.cpp;${SPIN_Exceptions_SRC_CXX}")
set(SPIN_Exceptions_SRC_CXX "${CMAKE_CURRENT_LIST_DIR}/PathTooLongException.cpp;${SPIN_Exceptions_SRC_CXX}")
