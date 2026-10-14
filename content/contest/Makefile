# Compile-time warnings
WARNINGS := -Wshift-overflow=2 -Wfloat-equal -Wconversion

# Sanitizers (optional; remove if you don't want AddressSanitizer)
SANITIZERS := -fsanitize=address -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC -fsanitize=undefined

# Compiler
CXX := g++

# Target
TARGET := a.out
SRC := GG.cpp

# Build the program
$(TARGET): $(SRC)
	$(CXX) -Dlocal $(WARNINGS) $(SANITIZERS) $(SRC) -o $(TARGET)

# Run program
run: $(TARGET)
	./$(TARGET)

# Clean build
clean:
	rm -f $(TARGET)
