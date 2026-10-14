// sub_0801DBD0 at 0x0801DBD0 (thumb)

undefined4 sub_0801DBD0(uint param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  iVar2 = sub_080008C8(0x10);
  if (iVar2 != 0) {
    uVar4 = 0;
    do {
      sVar1 = (short)uVar4;
      *(short *)(sVar1 * 2 + iVar2) = *(short *)(&DAT_083333cc + (param_1 & 0xff) * 2) + sVar1;
      uVar3 = (int)sVar1 + 1;
      uVar4 = uVar3 & 0xffff;
    } while ((int)(uVar3 * 0x10000) >> 0x10 < 8);
    sub_08002824(iVar2,(DAT_02000f96 & 0x1f00) * 8 + 0x364,0x10);
  }
  return in_lr;
}

