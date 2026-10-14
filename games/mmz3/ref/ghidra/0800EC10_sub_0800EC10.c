// sub_0800EC10 at 0x0800EC10 (thumb)

undefined4 sub_0800EC10(int param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 in_lr;
  
  uVar3 = *(int *)(param_1 + 0x34) + (uint)*(ushort *)(param_1 + 0x10);
  uVar6 = uVar3 & 0xffff;
  uVar1 = FUN_080fe2f8(*(int *)(param_1 + 0x38) + -0x5a0,0xc);
  uVar1 = uVar1 & 0xffff;
  puVar2 = (uint *)sub_08001B60(0x280);
  if (puVar2 != (uint *)0x0) {
    DAT_03001708 = &DAT_0400001c;
    DAT_0300170c = 0xa6600001;
    iVar4 = 0;
    DAT_03001704 = puVar2;
    if (uVar1 < 0x50) {
      puVar5 = puVar2;
      do {
        *puVar5 = uVar1 << 0x10 | uVar3 * 0x10000 >> 0x16;
        puVar5 = puVar5 + 1;
        iVar4 = iVar4 + 1;
      } while ((int)(uVar1 + iVar4) < 0x50);
    }
    if ((int)(uVar1 + iVar4) < 0x58) {
      puVar5 = puVar2 + iVar4;
      do {
        *puVar5 = uVar1 << 0x10 | uVar6 >> 5;
        puVar5 = puVar5 + 1;
        iVar4 = iVar4 + 1;
      } while ((int)(uVar1 + iVar4) < 0x58);
    }
    if ((int)(uVar1 + iVar4) < 0x70) {
      puVar5 = puVar2 + iVar4;
      do {
        *puVar5 = uVar1 << 0x10 | uVar6 >> 3;
        puVar5 = puVar5 + 1;
        iVar4 = iVar4 + 1;
      } while ((int)(uVar1 + iVar4) < 0x70);
    }
    if (iVar4 < 0xa0) {
      puVar2 = puVar2 + iVar4;
      do {
        *puVar2 = uVar1 << 0x10 | uVar6 >> 2;
        puVar2 = puVar2 + 1;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0xa0);
    }
  }
  return in_lr;
}

