from setuptools import find_packages
from setuptools import setup

setup(
    name='mars_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('mars_msgs', 'mars_msgs.*')),
)
