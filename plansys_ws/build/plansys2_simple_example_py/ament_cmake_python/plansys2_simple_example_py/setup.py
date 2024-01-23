from setuptools import find_packages
from setuptools import setup

setup(
    name='plansys2_simple_example_py',
    version='0.0.4',
    packages=find_packages(
        include=('plansys2_simple_example_py', 'plansys2_simple_example_py.*')),
)
