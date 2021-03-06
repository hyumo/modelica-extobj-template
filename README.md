# modelica-extobj-template

Make Modelica `ExternalObeject` Development easier.

## Prerequisites

- Python intepreter and packaging tools
- Cookiecutter

### Python intepreter and packaging tools

Install Python for your operating system. Consult the official Python documentation for details.

`pip` and `setuptools` now come with Python 2 >=2.7.9 or Python 3 >=3.5. See the Python Packaging Authority’s (PyPA) documentation Requirements for Installing Packages for full details.

### Cookiecutter

Cookiecutter is a command-line utility that creates projects from cookiecutters (project templates), e.g. creating a Python package project from a Python package project template.

- Documentation: [https://cookiecutter.readthedocs.io](https://cookiecutter.readthedocs.io)
- GitHub: [https://github.com/cookiecutter/cookiecutter](https://cookiecutter.readthedocs.io)
- PyPI: [https://pypi.python.org/pypi/cookiecutter](https://pypi.python.org/pypi/cookiecutter)


#### Install cookiecutter

For detailed cookiecutter installation for your system, please check out cookiecutter [installation documentation](https://cookiecutter.readthedocs.io/en/latest/installation.html).

if you have pip on linux, just do this for your python environment:
```
pip install cookiecutter
```

## Create Project

To generate the project:
```
cookiecutter gh:hyumo/modelica-extobj-template
```

After you give the project a proper name, to test if the project is created correctly:
```
cd <PROJECT_NAME>
make
```

You should see a dummy testcase PASSED:
```
...
tests/test_{{cookiecutter.project_name}}.c:17:test_dummy:PASS

-----------------------
1 Tests 0 Failures 0 Ignored 
OK
```
