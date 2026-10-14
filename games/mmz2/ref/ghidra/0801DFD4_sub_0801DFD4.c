// sub_0801DFD4 at 0x0801DFD4 (thumb)

undefined4 sub_0801DFD4(void)

{
  int iVar1;
  undefined4 in_lr;
  
  if (DAT_0202f06a == '\0') {
    if ((DAT_0202f069 != DAT_0202f068) && (DAT_0202f068 = DAT_0202f069, DAT_0202f069 != 0)) {
      iVar1 = DAT_0202f069 + 0x92;
      sub_08002638(&DAT_08432d00 + iVar1 * 5,
                   ((uint)(ushort)(&DAT_0202e590)[iVar1] -
                   (uint)((ushort)(&DAT_08432d06)[iVar1 * 10] >> 6)) * 0x20 + 0x10000);
      sub_08002AEC(&DAT_08432d0c + iVar1 * 0x14,
                   ((uint)(ushort)(&DAT_0202e390)[iVar1] - (uint)(byte)(&DAT_08432d13)[iVar1 * 0x14]
                   ) * 0x20 + 0x200);
    }
  }
  else {
    DAT_0202f06a = DAT_0202f06a + -1;
  }
  return in_lr;
}

