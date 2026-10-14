// sub_080B3DE4 at 0x080B3DE4 (thumb)

undefined4 sub_080B3DE4(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (param_2 << 0x10) >> 0x18;
  *(undefined4 *)(param_1 + 0x6c) = (&DAT_085b8000)[uVar1];
  *(undefined4 *)(param_1 + 0x34) = (&DAT_08593000)[uVar1];
  sub_080033F0(param_1 + 0x6c,param_2 & 0xff);
  *(ushort *)(param_1 + 0xb8) = (ushort)(byte)(param_2 >> 8);
  *(undefined2 *)(param_1 + 0xba) = 0xff;
  return in_lr;
}

