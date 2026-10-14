// sub_080E8880 at 0x080E8880 (thumb)

undefined4 sub_080E8880(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  sub_08128884(param_1,*(undefined4 *)(&DAT_08865d5c + (uint)*(byte *)(param_1 + 0x10) * 4));
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
  return in_lr;
}

