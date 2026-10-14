// sub_0803AF5C at 0x0803AF5C (thumb)

void sub_0803AF5C(int param_1)

{
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    *(undefined *)(param_1 + 0xd) = 0x10;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return;
}

