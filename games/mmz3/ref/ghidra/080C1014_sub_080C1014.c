// sub_080C1014 at 0x080C1014 (thumb)

undefined4 sub_080C1014(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
  sub_0801749C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,0x6001);
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836b9f4 + (uint)*(byte *)(param_1 + 0x10) * 4));
  return in_lr;
}

