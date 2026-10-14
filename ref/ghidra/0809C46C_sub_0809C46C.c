// sub_0809C46C at 0x0809C46C (thumb)

void sub_0809C46C(int param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x02') {
    *(undefined *)(param_1 + 0x45) = 1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
  }
  return;
}

