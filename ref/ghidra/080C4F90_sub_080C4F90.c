// sub_080C4F90 at 0x080C4F90 (thumb)

undefined4 sub_080C4F90(int param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  *(undefined2 *)(param_1 + 4) = 1;
  pbVar1 = (byte *)(param_1 + 0x9e4);
  sub_080014E8(&DAT_08532050 + (uint)*pbVar1 * 0x14,0x10000);
  sub_0800179C(&DAT_0853205c + (uint)*pbVar1 * 0x14,0x200);
  sub_080B49DC(&DAT_0202b5a0,(int)(char)*pbVar1,*(undefined4 *)(param_1 + 0x9e0));
  *(undefined *)(param_1 + 0x9e8) = 4;
  sub_080C5000(param_1);
  return in_lr;
}

