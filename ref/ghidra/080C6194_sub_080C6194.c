// sub_080C6194 at 0x080C6194 (thumb)

undefined4 sub_080C6194(int param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  *(undefined2 *)(param_1 + 4) = 1;
  pbVar1 = (byte *)(param_1 + 0x9e5);
  sub_080014E8(&DAT_08532050 + (uint)*pbVar1 * 0x14,0x10000);
  sub_0800179C(&DAT_0853205c + (uint)*pbVar1 * 0x14,0x200);
  *(undefined *)(param_1 + 0x9e7) = 4;
  sub_080B49DC(&DAT_0202b5a0,(int)(char)*pbVar1,*(undefined4 *)(param_1 + 0x9e0));
  sub_080C6204(param_1);
  return in_lr;
}

