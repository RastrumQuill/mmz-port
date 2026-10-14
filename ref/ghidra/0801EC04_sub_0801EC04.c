// sub_0801EC04 at 0x0801EC04 (thumb)

undefined4 sub_0801EC04(int param_1)

{
  undefined4 in_lr;
  
  sub_0801A0A4(param_1 + 0x4c,param_1 + 0xc4,*(undefined4 *)(param_1 + 0x108),
               *(byte *)(param_1 + 10) >> 4 & 1,1,1);
  sub_080191B4(param_1 + 0x4c,param_1 + 0xc4,*(undefined4 *)(param_1 + 0x108),
               *(byte *)(param_1 + 10) >> 4 & 1,0x800,1);
  return in_lr;
}

