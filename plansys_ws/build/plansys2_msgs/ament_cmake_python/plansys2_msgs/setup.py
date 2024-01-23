from setuptools import find_packages
from setuptools import setup

setup(
    name='plansys2_msgs',
    version='2.0.9',
    packages=find_packages(
        include=('plansys2_msgs', 'plansys2_msgs.*')),
)
