// sub_080BEEF4 at 0x080BEEF4 (thumb)

undefined4 sub_080BEEF4(ushort *param_1,ushort *param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  uVar4 = param_3 & 0xff;
  if ((int)(param_3 * 0x1000000) < 0) {
    uVar4 = uVar4 + 0x80 & 0xff;
    iVar5 = 0xf;
    do {
      uVar1 = *param_1;
      param_1 = param_1 + 1;
      uVar2 = uVar1 >> 5 & 0x1f;
      uVar3 = uVar1 >> 10 & 0x1f;
      *param_2 = (short)(uVar1 & 0x1f) + (short)(uVar4 * (0x1f - (uVar1 & 0x1f)) >> 7) |
                 ((short)uVar2 + (short)(uVar4 * (0x1f - uVar2) >> 7)) * 0x20 |
                 ((short)uVar3 + (short)(uVar4 * (0x1f - uVar3) >> 7)) * 0x400;
      param_2 = param_2 + 1;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  else {
    iVar5 = 0xf;
    do {
      uVar1 = *param_1;
      param_1 = param_1 + 1;
      *param_2 = (ushort)(uVar4 * (uVar1 & 0x1f) >> 7) |
                 (ushort)((uVar4 * (uVar1 >> 5 & 0x1f) >> 7) << 5) |
                 (ushort)((uVar4 * (uVar1 >> 10 & 0x1f) >> 7) << 10);
      param_2 = param_2 + 1;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  return in_lr;
}

