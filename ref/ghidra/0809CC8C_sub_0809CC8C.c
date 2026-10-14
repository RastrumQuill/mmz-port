// sub_0809CC8C at 0x0809CC8C (thumb)

void sub_0809CC8C(int param_1)

{
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return;
}

