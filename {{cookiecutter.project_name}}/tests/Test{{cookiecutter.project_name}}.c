
#include "{{cookiecutter.project_name}}.h"

#include "unity.h"

void setUp(void) {
}

void tearDown(void) {
}

void test_{{cookiecutter.project_name}}_ctor(void) {
}

void test_{{cookiecutter.project_name}}_dtor(void) {
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_{{cookiecutter.project_name}}_ctor);
    RUN_TEST(test_{{cookiecutter.project_name}}_dtor);
    return UNITY_END();
}



