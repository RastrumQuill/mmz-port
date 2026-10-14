// sub_08081F9C at 0x08081F9C (thumb)

void sub_08081F9C(int param_1)

{
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return;
}

