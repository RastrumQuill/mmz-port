// sub_08006328 at 0x08006328 (thumb)

undefined4 sub_08006328(void)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  DAT_02004f30 = DAT_02004f30 & 0xc1ff;
  if ((DAT_02005430 >> 8 != 0xff) && ((DAT_02005430 & 0xff) != 0xff)) {
    piVar2 = (int *)(&DAT_086b0000 + (uint)(DAT_02005430 >> 8) * 4);
    iVar1 = (DAT_02005430 & 0xff) * 0x14;
    sub_08001574((undefined *)((int)piVar2 + iVar1 + *piVar2),0x4000);
    sub_0800179C((undefined *)((int)piVar2 + iVar1 + *piVar2 + 0xc),0);
  }
  if ((DAT_02005432 >> 8 != 0xff) && ((DAT_02005432 & 0xff) != 0xff)) {
    piVar2 = (int *)(&DAT_086b0000 + (uint)(DAT_02005432 >> 8) * 4);
    iVar1 = (DAT_02005432 & 0xff) * 0x14;
    sub_08001574((undefined *)((int)piVar2 + iVar1 + *piVar2),0x4000);
    sub_0800179C((undefined *)((int)piVar2 + iVar1 + *piVar2 + 0xc),0);
  }
  piVar2 = &DAT_0200502c;
  iVar1 = 2;
  do {
    *piVar2 = *piVar2 + 0x2000;
    piVar2[1] = piVar2[1] + 0x2000;
    piVar2 = piVar2 + 0x1c;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  DAT_02004f30 = DAT_02004f30 & 0xf0ff | DAT_02005434 << 8;
  DAT_02004f36 = DAT_02005436;
  DAT_02004f38 = DAT_02005438;
  DAT_02004f3a = DAT_0200543a;
  return in_lr;
}

