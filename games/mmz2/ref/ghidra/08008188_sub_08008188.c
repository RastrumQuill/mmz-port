// sub_08008188 at 0x08008188 (thumb)

undefined4 sub_08008188(void)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  DAT_02000f90 = DAT_02000f90 & 0xc1ff;
  if ((DAT_020017d4 >> 8 != 0xff) && ((DAT_020017d4 & 0xff) != 0xff)) {
    piVar2 = (int *)(&DAT_08732cb0 + (uint)(DAT_020017d4 >> 8) * 4);
    iVar1 = (DAT_020017d4 & 0xff) * 0x14;
    sub_080027AC((undefined *)((int)piVar2 + iVar1 + *piVar2),0x4000);
    sub_08002AEC((undefined *)((int)piVar2 + iVar1 + *piVar2 + 0xc),0);
  }
  if ((DAT_020017d6 >> 8 != 0xff) && ((DAT_020017d6 & 0xff) != 0xff)) {
    piVar2 = (int *)(&DAT_08732cb0 + (uint)(DAT_020017d6 >> 8) * 4);
    iVar1 = (DAT_020017d6 & 0xff) * 0x14;
    sub_080027AC((undefined *)((int)piVar2 + iVar1 + *piVar2),0x4000);
    sub_08002AEC((undefined *)((int)piVar2 + iVar1 + *piVar2 + 0xc),0);
  }
  piVar2 = &DAT_0200105c;
  iVar1 = 2;
  do {
    *piVar2 = *piVar2 + 0x2000;
    piVar2[1] = piVar2[1] + 0x2000;
    piVar2[6] = piVar2[6] + 0x2000;
    piVar2[7] = piVar2[7] + 0x2000;
    piVar2 = piVar2 + 0x22;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  DAT_02000f90 = DAT_02000f90 & 0xf0ff | DAT_020017d8 << 8;
  DAT_02000f96 = DAT_020017da;
  DAT_02000f98 = DAT_020017dc;
  DAT_02000f9a = DAT_020017de;
  DAT_0202d002 = 1;
  return in_lr;
}

