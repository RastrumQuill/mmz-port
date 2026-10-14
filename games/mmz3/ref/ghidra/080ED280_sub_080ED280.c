// sub_080ED280 at 0x080ED280 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_080ED280(int param_1,byte param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = 0;
  if (*(byte *)(param_1 + 0x246) != param_2) {
    *(byte *)(param_1 + 0x246) = param_2;
    *(undefined2 *)(param_1 + 0x244) = 0;
  }
  if (1 < param_2) {
    if (*(short *)(param_1 + 0x244) < 0xc) {
      iVar6 = (*(short *)((int)&DAT_080fe64c +
                         ((uint)(*(short *)(param_1 + 0x244) * 0x5000000) >> 0x17)) * 5 >> 4) +
              -0x50;
    }
    goto LAB_080ed37e;
  }
  puVar3 = (ushort *)(param_1 + 0x244);
  uVar1 = *puVar3;
  uVar2 = *puVar3;
  if ((short)uVar2 < 0x20) {
    puVar3 = (ushort *)((int)&DAT_080fe64c + (((uint)uVar1 << 0x19) >> 0x17));
    iVar6 = ((short)*puVar3 * 3 >> 3) + -0x50;
    uVar1 = *puVar3;
LAB_080ed32e:
    iVar5 = (int)((uint)uVar1 << 0x10) >> 0x14;
  }
  else if ((short)uVar2 < 0x30) {
    iVar6 = 0x10;
    iVar5 = 0x10;
  }
  else if ((short)uVar2 < 0x4c) {
    iVar6 = FUN_080fe2f8(((short)*puVar3 + -0x30) * 0x10,7);
    iVar6 = 0x100 - (*(short *)((int)&DAT_080fe64c + ((uint)((iVar6 + 0x40) * 0x1000000) >> 0x17)) *
                     0xf >> 4);
    if (0x3b < (short)uVar2) {
      uVar1 = *(ushort *)((int)&DAT_080fe64c + ((uint)uVar1 * 0x4000000 + 0x50000000 >> 0x17));
      goto LAB_080ed32e;
    }
    iVar5 = 0x10;
  }
  else {
    iVar5 = 0;
  }
  DAT_02002402 = (ushort)iVar5 & 0x1f | (0x10 - (short)(iVar5 * 3 >> 2)) * 0x100;
LAB_080ed37e:
  if (param_2 == 1) {
    iVar6 = 0xa0 - iVar6;
  }
  _DAT_020023d8 = (2 - (ushort)param_2) * 0x50 - (short)iVar6;
  iVar5 = iVar6 + 0x50;
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  if (0xf0 < iVar6) {
    iVar6 = 0xf0;
  }
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  if (0xf0 < iVar5) {
    iVar5 = 0xf0;
  }
  DAT_02002416 = (ushort)iVar5 & 0xff | (ushort)(iVar6 << 8);
  psVar4 = (short *)(param_1 + 0x244);
  if (*psVar4 < 0x60) {
    *psVar4 = *psVar4 + 1;
  }
  return in_lr;
}

