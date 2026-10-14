// sub_08039020 at 0x08039020 (thumb)

undefined4 sub_08039020(undefined4 param_1)

{
  ushort *puVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = 0;
  do {
    puVar1 = &DAT_02000030 + uVar2;
    if (*puVar1 != (&DAT_02000038)[uVar2]) {
      *puVar1 = (&DAT_02000038)[uVar2];
      sub_080EEF68(&UNK_08335fe0 + (uint)*puVar1 * 0x20,
                   &DAT_03002cc0 + (uint)(byte)(&DAT_08335fdc)[uVar2] * 0x20,8);
    }
    uVar2 = uVar2 + 1 & 0xffff;
  } while (uVar2 < 4);
  sub_0801218C(DAT_0202f070,param_1);
  return in_lr;
}

