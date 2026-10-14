// sub_080BC88C at 0x080BC88C (thumb)

undefined4 sub_080BC88C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = ((uint)(param_1 << 0x10) >> 0x18) * 4;
  DAT_02023670 = (uint)*(ushort *)
                        (((param_1 << 0x10 & 0xff0000U) >> 0xf) + *(int *)(&DAT_082bb1d4 + iVar1)) +
                 *(int *)(&DAT_082bb220 + iVar1);
  DAT_02023660 = 1;
  if ((DAT_02023664 & 0xff) == 1) {
    DAT_0202365a = 1;
    DAT_02023678 = DAT_02023670;
  }
  else {
    sub_080BC910(&DAT_02023658);
    sub_080BC934(&DAT_02023658);
    if (DAT_0202365c == '\0') {
      DAT_02023664 = 2;
    }
    else {
      DAT_02023664 = 1;
    }
  }
  DAT_02023658 = 1;
  return in_lr;
}

