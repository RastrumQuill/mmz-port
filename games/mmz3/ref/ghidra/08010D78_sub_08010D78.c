// sub_08010D78 at 0x08010D78 (thumb)

undefined4 sub_08010D78(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  DAT_02002410 = DAT_02002410 & 0xbfff;
  DAT_0200241e = DAT_0200241e | 0xe;
  uVar2 = 0;
  do {
    iVar3 = *(int *)(&DAT_0202f4a8 + ((short)uVar2 + 0x11) * 4);
    if (iVar3 != 0) {
      *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfc;
      *(undefined4 *)(iVar3 + 0x8c) = 0;
      *(undefined4 *)(iVar3 + 0x90) = 0;
      *(undefined *)(iVar3 + 0x94) = 0;
      *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfb;
      *(undefined4 *)(iVar3 + 0xc) = 3;
      *(undefined4 *)(iVar3 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(iVar3 + 9) * 4) + 0xc);
    }
    uVar1 = (int)(short)uVar2 + 1;
    uVar2 = uVar1 & 0xffff;
  } while ((int)(uVar1 * 0x10000) >> 0x10 < 4);
  uVar2 = 0;
  do {
    iVar3 = *(int *)(&DAT_0202f4a8 + ((short)uVar2 + 0x15) * 4);
    if (iVar3 != 0) {
      *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfc;
      *(undefined4 *)(iVar3 + 0x8c) = 0;
      *(undefined4 *)(iVar3 + 0x90) = 0;
      *(undefined *)(iVar3 + 0x94) = 0;
      *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfb;
      *(undefined4 *)(iVar3 + 0xc) = 3;
      *(undefined4 *)(iVar3 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(iVar3 + 9) * 4) + 0xc);
    }
    uVar1 = (int)(short)uVar2 + 1;
    uVar2 = uVar1 & 0xffff;
  } while ((int)(uVar1 * 0x10000) >> 0x10 < 10);
  iVar3 = sub_080047C0(0x10d);
  if (iVar3 != 0) {
    sub_08004768(0x10d);
  }
  return in_lr;
}

