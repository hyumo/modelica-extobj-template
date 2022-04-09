## {{cookiecutter.project_name}}

After creating the project, you can run all tests:
```
cd {{cookiecutter.project_name}}
make
```

You should see two dummy testcases PASSED:
```
...
tests/test_{{cookiecutter.project_name}}.c:20:test_{{cookiecutter.project_name}}_ctor:PASS
tests/test_{{cookiecutter.project_name}}.c:21:test_{{cookiecutter.project_name}}_dtor:PASS

-----------------------
2 Tests 0 Failures 0 Ignored 
OK
```