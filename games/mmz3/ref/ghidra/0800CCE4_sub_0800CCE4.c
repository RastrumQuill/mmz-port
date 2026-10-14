// sub_0800CCE4 at 0x0800CCE4 (thumb)

undefined4 sub_0800CCE4(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  DAT_0202f4a8 = 0;
  DAT_0202f4a9 = 0;
  DAT_0202f4aa._0_1_ = 0;
  uVar3 = (uint)DAT_02030109 << 0x18;
  iVar2 = (~(uVar3 >> 0x19) & 1) + (~(uVar3 >> 0x1a) & 1) + (~(uVar3 >> 0x1b) & 1);
  if ((DAT_02030109 & 0x10) == 0) {
    iVar2 = iVar2 + 1;
  }
  DAT_0202e48c = *(undefined4 *)(&DAT_083394b4 + iVar2 * 4);
  uVar3 = 0;
  do {
    iVar2 = (int)(char)uVar3;
    uVar1 = sub_080DF9C0(uVar3,&DAT_083394e0 + iVar2 * 8);
    (&DAT_0202f4ac)[iVar2] = uVar1;
    uVar3 = iVar2 + 1U & 0xff;
  } while ((int)((iVar2 + 1U) * 0x1000000) >> 0x18 < 4);
  return in_lr;
}

