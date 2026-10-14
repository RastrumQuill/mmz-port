// sub_08017B50 at 0x08017B50 (thumb)

undefined4 sub_08017B50(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 in_lr;
  undefined4 local_20 [2];
  
  iVar8 = 0x9f;
  iVar1 = *(int *)(param_1 + 0x5c);
  if (DAT_0202cab2 != 0) {
    sub_081284E4(&DAT_08b426c8,
                 ((ushort)(&DAT_02000a04)[(uint)(iVar1 << 0x10) >> 0x14] & 0x1f00) * 8 + 0x6000000,
                 0x200);
    local_20[0] = 0;
    sub_081284E4(local_20,&DAT_06000800 +
                          ((ushort)(&DAT_02000a04)[(uint)(iVar1 << 0x10) >> 0x14] & 0x1f00) * 8,
                 0x1000200);
  }
  iVar1 = sub_08000A70(0x280);
  if (iVar1 != 0) {
    DAT_03001708 = &DAT_0400001c;
    DAT_0300170c = 0xa6600001;
    iVar4 = *(int *)(param_1 + 0x34);
    uVar7 = *(int *)(param_1 + 0x38) - 0x400U & 0xffff;
    uVar6 = uVar7 * 0x10000;
    iVar2 = (int)uVar6 >> 0x10;
    DAT_03001704 = iVar1;
    if (0xa7 < iVar2 + 0x9f) {
      puVar5 = (uint *)(iVar1 + 0x27c);
      do {
        *puVar5 = uVar6 | iVar4 * 0xe >> 4 & 0xffffU;
        puVar5 = puVar5 + -1;
        iVar8 = iVar8 + -1;
        if (iVar2 + iVar8 < 0xa8) break;
      } while (-1 < iVar8);
    }
    iVar2 = *(int *)(param_1 + 0x34);
    uVar7 = uVar7 * 0x10000;
    iVar4 = (int)uVar7 >> 0x10;
    if ((0xa1 < iVar4 + iVar8) && (-1 < iVar8)) {
      puVar5 = (uint *)(iVar8 * 4 + iVar1);
      do {
        *puVar5 = uVar7 | iVar2 * 0xe >> 4 & 0xffffU;
        puVar5 = puVar5 + -1;
        iVar8 = iVar8 + -1;
        if (iVar4 + iVar8 < 0xa2) break;
      } while (-1 < iVar8);
    }
    iVar2 = *(int *)(param_1 + 0x34);
    if ((0x97 < iVar4 + iVar8) && (-1 < iVar8)) {
      puVar5 = (uint *)(iVar8 * 4 + iVar1);
      do {
        *puVar5 = uVar7 | iVar2 * 0xd >> 4 & 0xffffU;
        puVar5 = puVar5 + -1;
        iVar8 = iVar8 + -1;
        if (iVar4 + iVar8 < 0x98) break;
      } while (-1 < iVar8);
    }
    iVar2 = *(int *)(param_1 + 0x34);
    if (0x8f < iVar4 + iVar8) {
      if (iVar8 < 0) {
        return in_lr;
      }
      puVar5 = (uint *)(iVar8 * 4 + iVar1);
      do {
        *puVar5 = uVar7 | iVar2 * 0xc >> 4 & 0xffffU;
        puVar5 = puVar5 + -1;
        iVar8 = iVar8 + -1;
        if (iVar4 + iVar8 < 0x90) break;
      } while (-1 < iVar8);
    }
    if (-1 < iVar8) {
      iVar2 = iVar8 * -0x10000;
      piVar3 = (int *)(iVar8 * 4 + iVar1);
      do {
        *piVar3 = iVar2;
        iVar2 = iVar2 + 0x10000;
        piVar3 = piVar3 + -1;
        iVar8 = iVar8 + -1;
      } while (-1 < iVar8);
    }
  }
  return in_lr;
}

