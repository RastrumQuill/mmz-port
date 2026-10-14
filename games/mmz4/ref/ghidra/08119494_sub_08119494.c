// sub_08119494 at 0x08119494 (thumb)

undefined4 sub_08119494(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  param_1 = param_1 + 0xed8;
  bVar1 = *(byte *)(DAT_0202e8e0 + 4);
  uVar2 = (uint)*(byte *)(DAT_0202e8e0 + 2);
  if (bVar1 == 0) {
    if (uVar2 == 0) {
      uVar2 = 0;
      do {
        iVar3 = uVar2 * 2 + param_1;
        *(ushort *)(iVar3 + 0x11e) = (short)uVar2 + 0x378U | 0xf000;
        *(ushort *)(iVar3 + 0x162) = (short)uVar2 + 0x3f8U | 0xf000;
        uVar2 = uVar2 + 1 & 0xff;
      } while (uVar2 < 8);
    }
    else {
      uVar4 = 0;
      do {
        iVar3 = uVar4 * 2 + param_1;
        *(ushort *)(iVar3 + 0x11e) =
             *(short *)(&DAT_08885ee6 + uVar2 * 2) + 0x300 + (short)uVar4 | 0xf000;
        *(ushort *)(iVar3 + 0x162) = (short)uVar4 + 0x3f8U | 0xf000;
        uVar4 = uVar4 + 1 & 0xff;
      } while (uVar4 < 8);
    }
  }
  else {
    uVar4 = 0;
    do {
      iVar3 = uVar4 * 2 + param_1;
      *(ushort *)(iVar3 + 0x11e) =
           *(short *)(&DAT_08885ecc + (uint)bVar1 * 2) + 0x300 + (short)uVar4 | 0xf000;
      *(ushort *)(iVar3 + 0x162) =
           *(short *)(&DAT_08885ee6 + uVar2 * 2) + 0x300 + (short)uVar4 | 0xf000;
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < 8);
  }
  return in_lr;
}

