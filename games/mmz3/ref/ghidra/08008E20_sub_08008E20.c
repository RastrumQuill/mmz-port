// sub_08008E20 at 0x08008E20 (thumb)

undefined4 sub_08008E20(void)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  DAT_020023c0 = DAT_020023c0 & 0xc1ff;
  if ((DAT_02002c54 >> 8 != 0xff) && ((DAT_02002c54 & 0xff) != 0xff)) {
    piVar2 = (int *)(&DAT_087044b0 + (uint)(DAT_02002c54 >> 8) * 4);
    iVar1 = (DAT_02002c54 & 0xff) * 0x14;
    sub_0800393C((undefined *)((int)piVar2 + iVar1 + *piVar2),0x4000);
    sub_08003E14((undefined *)((int)piVar2 + iVar1 + *piVar2 + 0xc),0);
  }
  if ((DAT_02002c56 >> 8 != 0xff) && ((DAT_02002c56 & 0xff) != 0xff)) {
    piVar2 = (int *)(&DAT_087044b0 + (uint)(DAT_02002c56 >> 8) * 4);
    iVar1 = (DAT_02002c56 & 0xff) * 0x14;
    sub_0800393C((undefined *)((int)piVar2 + iVar1 + *piVar2),0x4000);
    sub_08003E14((undefined *)((int)piVar2 + iVar1 + *piVar2 + 0xc),0);
  }
  piVar2 = &DAT_020024dc;
  iVar1 = 2;
  do {
    *piVar2 = *piVar2 + 0x2000;
    piVar2[1] = piVar2[1] + 0x2000;
    piVar2[6] = piVar2[6] + 0x2000;
    piVar2[7] = piVar2[7] + 0x2000;
    piVar2 = piVar2 + 0x22;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  DAT_020023c0 = DAT_020023c0 & 0xf0ff | DAT_02002c58 << 8;
  DAT_020023c6 = DAT_02002c5a;
  DAT_020023c8 = DAT_02002c5c;
  DAT_020023ca = DAT_02002c5e;
  DAT_0202e482 = 1;
  return in_lr;
}

