// sub_0800F61C at 0x0800F61C (thumb)

undefined4 sub_0800F61C(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = *(uint *)(param_1 + 0x5c);
  if ((DAT_02001286 >> 8 == 4) && ((DAT_02001286 & 0xff) == 5)) {
    sub_08001EA4(&UNK_08fa4928 + (uint)(byte)DAT_0202dada * 0x14,0x4000);
    sub_08002208(&UNK_08fa4934 + (uint)(byte)DAT_0202dada * 0x14,0);
  }
  uVar1 = (uVar1 & 0xffff) >> 4;
  (&DAT_02000a0c)[uVar1 * 2] = 0;
  (&DAT_02000a0e)[uVar1 * 2] =
       (short)((uint)(*(int *)(param_1 + 0x38) * *(int *)(param_1 + 0x48)) >> 8);
  return in_lr;
}

