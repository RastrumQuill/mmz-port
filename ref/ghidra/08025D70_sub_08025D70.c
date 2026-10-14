// sub_08025D70 at 0x08025D70 (thumb)

void sub_08025D70(int param_1,undefined2 param_2,undefined2 param_3)

{
  uint uVar1;
  
  uVar1 = (uint)(param_1 << 0x10) >> 0xf;
  *(undefined2 *)((int)&DAT_02002034 + uVar1) = param_2;
  *(undefined2 *)((int)&DAT_0200203c + uVar1) = param_3;
  return;
}

