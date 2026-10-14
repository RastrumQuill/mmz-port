// sub_0804F46C at 0x0804F46C (thumb)

void sub_0804F46C(int param_1)

{
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    *(undefined *)(param_1 + 0x12) = 7;
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return;
}

