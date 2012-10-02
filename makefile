CC = g++
OPT = 0
DBG = 3
MYCFLAGS =
MYLDFLAGS =
GIT_VERSION = $(shell git rev-parse --short HEAD)-$(shell date +%y%m%d)
CFLAGS = -O$(OPT) -g$(DBG) -DGIT_VERSION="\"$(GIT_VERSION)\"" $(MYCFLAGS)
LDFLAGS = -L/usr/local/lib -lsfml-system -lsfml-window -lsfml-audio -lsfml-graphics $(MYLDFLAGS)
OBJDIR = obj
OUT = finallylord

.PHONY: clean
default: $(OUT)

SRC = $(wildcard src/*.cpp)
HDR = $(wildcard src/*.h)
OBJ = $(patsubst src/%.cpp,$(OBJDIR)/%.o,$(SRC))

$(OBJDIR)/%.o: src/%.cpp $(HDR)
	@mkdir -p $(OBJDIR)
	$(CC) -o $@ $(CFLAGS) -c $<

$(OUT): $(OBJ)
	$(CC) -o $(OUT) $(OBJ) $(LDFLAGS)

clean:
	@rm -rf $(OUT) $(OBJDIR)
