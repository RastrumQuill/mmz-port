// sub_0800D9A8 at 0x0800D9A8 (thumb)

undefined4 sub_0800D9A8(int param_1)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  undefined4 in_lr;
  
  sub_0800696C();
  sVar1 = DAT_02004f46;
  iVar2 = FUN_0800061c(0x140);
  if (iVar2 != 0) {
    FUN_0800065c(sVar1,iVar2,0x140);
    iVar4 = 0x7c;
    psVar3 = (short *)(iVar2 + 0xf8);
    do {
      *psVar3 = sVar1 + (char)((ushort)(&DAT_080c8e24)
                                       [(uint)*(ushort *)(param_1 + 0x60) + iVar4 * -0x10 & 0xff] >>
                              8);
      psVar3 = psVar3 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x90);
    DAT_030004f8 = &DAT_0400001a;
    DAT_030004fc = 0xa2600001;
    DAT_030004f4 = iVar2;
  }
  return in_lr;
}

