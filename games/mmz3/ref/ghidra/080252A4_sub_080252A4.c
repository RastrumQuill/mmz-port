// sub_080252A4 at 0x080252A4 (thumb)

undefined4 sub_080252A4(void)

{
  int iVar1;
  undefined4 in_lr;
  
  if (DAT_020305da == '\0') {
    if ((DAT_020305d9 != DAT_020305d8) && (DAT_020305d8 = DAT_020305d9, DAT_020305d9 != 0)) {
      iVar1 = DAT_020305d9 + 0x19;
      sub_08003AB0(&DAT_085d78f8 + iVar1 * 5,
                   ((uint)(ushort)(&DAT_0202fa10)[iVar1] -
                   (uint)((ushort)(&DAT_085d78fe)[iVar1 * 10] >> 6)) * 0x20 + 0x10000);
      sub_08003E14(&DAT_085d7904 + iVar1 * 0x14,
                   ((uint)(ushort)(&DAT_0202f810)[iVar1] - (uint)(byte)(&DAT_085d790b)[iVar1 * 0x14]
                   ) * 0x20 + 0x200);
    }
  }
  else {
    DAT_020305da = DAT_020305da + -1;
  }
  return in_lr;
}

