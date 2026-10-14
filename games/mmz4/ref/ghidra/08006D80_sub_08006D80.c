// sub_08006D80 at 0x08006D80 (thumb)

undefined4 sub_08006D80(void)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  DAT_02000a00 = DAT_02000a00 & 0xc1ff;
  if ((DAT_02001284 >> 8 != 0xff) && ((DAT_02001284 & 0xff) != 0xff)) {
    piVar2 = (int *)(&DAT_08df2000 + (uint)(DAT_02001284 >> 8) * 4);
    iVar1 = (DAT_02001284 & 0xff) * 0x14;
    sub_08001D30((undefined *)((int)piVar2 + iVar1 + *piVar2),0x4000);
    sub_08002208((undefined *)((int)piVar2 + iVar1 + *piVar2 + 0xc),0);
  }
  if ((DAT_02001286 >> 8 != 0xff) && ((DAT_02001286 & 0xff) != 0xff)) {
    piVar2 = (int *)(&DAT_08df2000 + (uint)(DAT_02001286 >> 8) * 4);
    iVar1 = (DAT_02001286 & 0xff) * 0x14;
    sub_08001D30((undefined *)((int)piVar2 + iVar1 + *piVar2),0x4000);
    sub_08002208((undefined *)((int)piVar2 + iVar1 + *piVar2 + 0xc),0);
  }
  piVar2 = &DAT_02000b0c;
  iVar1 = 2;
  do {
    *piVar2 = *piVar2 + 0x2000;
    piVar2[1] = piVar2[1] + 0x2000;
    piVar2[6] = piVar2[6] + 0x2000;
    piVar2[7] = piVar2[7] + 0x2000;
    piVar2 = piVar2 + 0x22;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  DAT_02000a00 = DAT_02000a00 & 0xf0ff | DAT_02001288 << 8;
  DAT_02000a06 = DAT_0200128a;
  DAT_02000a08 = DAT_0200128c;
  DAT_02000a0a = DAT_0200128e;
  DAT_0202cab2 = 1;
  return in_lr;
}

