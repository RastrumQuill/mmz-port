// sub_0803DE64 at 0x0803DE64 (thumb)

void sub_0803DE64(int param_1)

{
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    *(undefined *)(param_1 + 0xd) = 0x14;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return;
}

