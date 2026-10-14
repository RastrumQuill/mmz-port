// sub_08018024 at 0x08018024 (thumb)

undefined4 sub_08018024(int param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = 0x9f;
  iVar1 = *(int *)(param_1 + 0x5c);
  if (DAT_0202cab2 != 0) {
    sub_081284E4(&DAT_08b5e5d0,
                 ((ushort)(&DAT_02000a04)[(uint)(iVar1 << 0x10) >> 0x14] & 0x1f00) * 8 + 0x6000000,
                 0x200);
    sub_081284E4(&DAT_08b5edd8,
                 &DAT_06000800 +
                 ((ushort)(&DAT_02000a04)[(uint)(iVar1 << 0x10) >> 0x14] & 0x1f00) * 8,0x200);
  }
  iVar1 = sub_08000A70(0x280);
  if (iVar1 != 0) {
    DAT_03001708 = &DAT_0400001c;
    DAT_0300170c = 0xa6600001;
    iVar5 = *(int *)(param_1 + 0x38) + -0x3f8;
    uVar2 = *(uint *)(param_1 + 0x34);
    DAT_03001704 = iVar1;
    if (0xd7 < *(int *)(param_1 + 0x38) + -0x359) {
      puVar3 = (uint *)(iVar1 + 0x27c);
      do {
        *puVar3 = iVar5 * 0x10000 | uVar2 & 0xffff;
        puVar3 = puVar3 + -1;
        iVar6 = iVar6 + -1;
        if (iVar5 + iVar6 < 0xd8) break;
      } while (-1 < iVar6);
    }
    iVar4 = *(int *)(param_1 + 0x34);
    if (-1 < iVar6) {
      puVar3 = (uint *)(iVar6 * 4 + iVar1);
      do {
        *puVar3 = iVar5 * 0x10000 | iVar4 * 0xe >> 4 & 0xffffU;
        puVar3 = puVar3 + -1;
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
    }
  }
  return in_lr;
}

