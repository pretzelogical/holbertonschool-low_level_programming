0x14 bit manipulation

When doing binary math you can use python to help visualise the numbers

```python
>>> bin(8)
# '0b1000'
>>> bin(8 | 1 << 1)
# '0b1010'
>>> bin(8 | 1 << 0)
# '0b1001'
```
