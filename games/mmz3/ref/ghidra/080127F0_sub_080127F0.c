// sub_080127F0 at 0x080127F0 (thumb)

undefined4 sub_080127F0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  undefined4 in_lr;
  
  uVar1 = *(int *)(param_1 + 0x34) << 0xf;
  iVar2 = *(int *)(param_1 + 0x38) + -0xe0;
  uVar4 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
  *(short *)(&DAT_020023cc + uVar4) = (short)(uVar1 >> 0x10);
  *(short *)((int)&DAT_020023cc + uVar4 * 4 + 2) = (short)iVar2;
  puVar3 = (uint *)sub_08001B60(0x280);
  if (puVar3 != (uint *)0x0) {
    DAT_03001708 = &DAT_04000018;
    DAT_0300170c = 0xa6600001;
    iVar5 = 0;
    uVar4 = iVar2 * 0x10000;
    puVar6 = puVar3;
    DAT_03001704 = puVar3;
    if ((int)uVar4 >> 0x10 < 0x38) {
      do {
        *puVar6 = uVar4 | uVar1 >> 0x10;
        iVar5 = iVar5 + 1;
        if (0x37 < ((int)uVar4 >> 0x10) + iVar5) break;
        puVar6 = puVar6 + 1;
      } while (iVar5 < 0xa0);
    }
    if (iVar5 < 0xa0) {
      puVar3 = puVar3 + iVar5;
      do {
        *puVar3 = *(int *)(param_1 + 0x34) * 0xc0 >> 8 & 0xffffU | uVar4;
        puVar3 = puVar3 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0xa0);
    }
  }
  return in_lr;
}

