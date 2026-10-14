// sub_08026580 at 0x08026580 (thumb)

undefined4 sub_08026580(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (param_2 << 0x10) >> 0x18;
  *(undefined4 *)(param_1 + 0x6c) = (&DAT_0859c000)[uVar1];
  *(undefined4 *)(param_1 + 0x34) = (&DAT_0854c000)[uVar1];
  sub_080033F0(param_1 + 0x6c,param_2 & 0xff);
  *(uint *)(param_1 + 0xb8) = uVar1;
  *(undefined2 *)(param_1 + 0x1c) = 0xff;
  return in_lr;
}

