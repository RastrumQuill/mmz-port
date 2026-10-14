// sub_08015F2C at 0x08015F2C (thumb)

undefined4 sub_08015F2C(int param_1,uint param_2,undefined param_3,undefined param_4)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (param_2 << 0x10) >> 0x18;
  *(undefined4 *)(param_1 + 0x6c) = (&DAT_08598000)[uVar1];
  *(undefined4 *)(param_1 + 0x34) = (&DAT_08540000)[uVar1];
  sub_080033F0(param_1 + 0x6c,param_2 & 0xff);
  *(undefined *)(param_1 + 0x71) = param_3;
  *(undefined *)(param_1 + 0x72) = param_4;
  *(uint *)(param_1 + 0xb8) = uVar1;
  *(undefined2 *)(param_1 + 0x1c) = 0xff;
  return in_lr;
}

