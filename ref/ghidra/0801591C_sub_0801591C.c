// sub_0801591C at 0x0801591C (thumb)

undefined4 sub_0801591C(void)

{
  int iVar1;
  undefined4 in_lr;
  
  if (DAT_02022e8a == '\0') {
    if ((DAT_02022e89 != DAT_02022e88) && (DAT_02022e88 = DAT_02022e89, DAT_02022e89 != 0)) {
      iVar1 = (uint)DAT_02022e89 * 0x14;
      sub_080014E8(&UNK_08500528 + iVar1,
                   ((uint)(ushort)(&DAT_02023010)[DAT_02022e89 + 0x42] -
                   (uint)(*(ushort *)(&DAT_0850052e + iVar1) >> 6)) * 0x20 + 0x10000);
      iVar1 = (uint)DAT_02022e88 * 0x14;
      sub_0800179C(&UNK_08500534 + iVar1,
                   ((uint)(byte)(&DAT_02023102)[DAT_02022e88] - (uint)(byte)(&DAT_0850053b)[iVar1])
                   * 0x20 + 0x200);
    }
  }
  else {
    DAT_02022e8a = DAT_02022e8a + -1;
  }
  return in_lr;
}

