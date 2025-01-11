#include "intelligent.h"

void Intelligent::Start() {
    Listener();
    Talker();
}

void Intelligent::Loop() {
    Start();
}