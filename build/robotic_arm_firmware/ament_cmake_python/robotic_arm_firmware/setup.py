from setuptools import find_packages
from setuptools import setup

setup(
    name='robotic_arm_firmware',
    version='0.0.0',
    packages=find_packages(
        include=('robotic_arm_firmware', 'robotic_arm_firmware.*')),
)
