// sub_0806F51C at 0x0806F51C (thumb)

void sub_0806F51C(int param_1)

{
  if ((*(ushort *)(param_1 + 0x1a) & 9) != 0) {
    *(undefined *)(*(int *)(param_1 + 0x40) + 0xd) = 2;
  }
  return;
}

