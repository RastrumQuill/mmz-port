// sub_0800C720 at 0x0800C720 (thumb)

undefined4 sub_0800C720(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  undefined4 in_lr;
  uint *local_24;
  
  iVar2 = *(int *)(param_1 + 0x34) << 0xd;
  iVar3 = *(int *)(param_1 + 0x38);
  puVar4 = (uint *)sub_080008C8(0x280);
  if (puVar4 != (uint *)0x0) {
    DAT_03001708 = &DAT_0400001c;
    DAT_0300170c = 0xa6600001;
    iVar5 = 0;
    iVar3 = ((iVar3 >> 3) + 0x40) * 0x1000000 >> 0x18;
    sVar1 = (short)((uint)iVar2 >> 0x10);
    DAT_03001704 = puVar4;
    if (0 < 0x28 - iVar3) {
      local_24 = puVar4;
      do {
        *local_24 = iVar3 << 0x10 | *(int *)(param_1 + 0x68) + (int)sVar1 & 0xffffU;
        local_24 = local_24 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x28 - iVar3);
    }
    if (iVar5 < 0x38 - iVar3) {
      puVar6 = puVar4 + iVar5;
      do {
        *puVar6 = iVar3 << 0x10 | (iVar2 >> 0x11) + (*(uint *)(param_1 + 0x68) >> 1) & 0xffff;
        puVar6 = puVar6 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x38 - iVar3);
    }
    if (iVar5 < 0x40 - iVar3) {
      puVar6 = puVar4 + iVar5;
      do {
        *puVar6 = iVar3 << 0x10 | (iVar2 >> 0x12) + (*(uint *)(param_1 + 0x68) >> 2) & 0xffff;
        puVar6 = puVar6 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x40 - iVar3);
    }
    if (iVar5 < 0x60 - iVar3) {
      puVar6 = puVar4 + iVar5;
      do {
        *puVar6 = iVar3 << 0x10 | (iVar2 >> 0x13) + (*(uint *)(param_1 + 0x68) >> 3) & 0xffff;
        puVar6 = puVar6 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x60 - iVar3);
    }
    if (iVar5 < 0x68 - iVar3) {
      puVar6 = puVar4 + iVar5;
      do {
        *puVar6 = iVar3 << 0x10 | (iVar2 >> 0x12) + (*(uint *)(param_1 + 0x68) >> 2) & 0xffff;
        puVar6 = puVar6 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x68 - iVar3);
    }
    if (iVar5 < 0x78 - iVar3) {
      puVar6 = puVar4 + iVar5;
      do {
        *puVar6 = iVar3 << 0x10 | (iVar2 >> 0x11) + (*(uint *)(param_1 + 0x68) >> 1) & 0xffff;
        puVar6 = puVar6 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x78 - iVar3);
    }
    if (iVar5 < 0xa0 - iVar3) {
      puVar4 = puVar4 + iVar5;
      do {
        *puVar4 = iVar3 << 0x10 | *(int *)(param_1 + 0x68) + (int)sVar1 & 0xffffU;
        puVar4 = puVar4 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0xa0 - iVar3);
    }
  }
  return in_lr;
}

