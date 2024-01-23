from setuptools import find_packages
from setuptools import setup

setup(
    name='plansys2_support_py',
    version='2.0.8',
    packages=find_packages(
        include=('plansys2_support_py', 'plansys2_support_py.*')),
)
