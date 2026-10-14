// sub_080390A8 at 0x080390A8 (thumb)

void sub_080390A8(int param_1,undefined2 param_2)

{
  *(undefined2 *)((int)&DAT_02000038 + ((uint)(param_1 << 0x10) >> 0xf)) = param_2;
  return;
}

