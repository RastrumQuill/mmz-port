// sub_08017274 at 0x08017274 (thumb)

undefined4 sub_08017274(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 in_lr;
  undefined4 local_20 [2];
  
  iVar10 = 0x9f;
  iVar1 = *(int *)(param_1 + 0x5c);
  if (DAT_0202cab2 != 0) {
    sub_081284E4(&DAT_08b3cee0,
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
    uVar2 = *(int *)(param_1 + 0x38) - 0x180;
    uVar9 = uVar2 & 0xffff;
    iVar4 = *(int *)(param_1 + 0x34);
    uVar8 = uVar9 * 0x10000;
    iVar3 = (int)uVar8 >> 0x10;
    DAT_03001704 = iVar1;
    if (0xaf < iVar3 + 0x9f) {
      puVar6 = (uint *)(iVar1 + 0x27c);
      do {
        *puVar6 = uVar8 | (uint)(iVar4 * 0xe000) >> 0x10;
        puVar6 = puVar6 + -1;
        iVar10 = iVar10 + -1;
        if (iVar3 + iVar10 < 0xb0) break;
      } while (-1 < iVar10);
    }
    iVar3 = *(int *)(param_1 + 0x34);
    uVar9 = uVar9 * 0x10000;
    iVar4 = (int)uVar9 >> 0x10;
    if ((0x9f < iVar4 + iVar10) && (-1 < iVar10)) {
      puVar6 = (uint *)(iVar10 * 4 + iVar1);
      do {
        *puVar6 = uVar9 | (uint)(iVar3 << 0xd) >> 0x10;
        puVar6 = puVar6 + -1;
        iVar10 = iVar10 + -1;
        if (iVar4 + iVar10 < 0xa0) break;
      } while (-1 < iVar10);
    }
    iVar4 = (int)(short)uVar2 - (*(int *)(param_1 + 0x38) + -0x1e0 >> 3);
    iVar3 = iVar4 * 0x10000 >> 0x10;
    if ((0x9f < iVar3 + iVar10) && (-1 < iVar10)) {
      iVar5 = iVar10 * -0x10000 + 0xa00000;
      piVar7 = (int *)(iVar10 * 4 + iVar1);
      do {
        *piVar7 = iVar5;
        iVar5 = iVar5 + 0x10000;
        piVar7 = piVar7 + -1;
        iVar10 = iVar10 + -1;
        if (iVar3 + iVar10 < 0xa0) break;
      } while (-1 < iVar10);
    }
    iVar4 = iVar4 * 0x10000;
    iVar3 = iVar4 >> 0x10;
    if (-1 < iVar3 + iVar10) {
      if (iVar10 < 0) {
        return in_lr;
      }
      piVar7 = (int *)(iVar10 * 4 + iVar1);
      do {
        *piVar7 = iVar4;
        piVar7 = piVar7 + -1;
        iVar10 = iVar10 + -1;
        if (iVar3 + iVar10 < 0) break;
      } while (-1 < iVar10);
    }
    if (-1 < iVar10) {
      iVar3 = iVar10 * -0x10000;
      piVar7 = (int *)(iVar10 * 4 + iVar1);
      do {
        *piVar7 = iVar3;
        iVar3 = iVar3 + 0x10000;
        piVar7 = piVar7 + -1;
        iVar10 = iVar10 + -1;
      } while (-1 < iVar10);
    }
  }
  return in_lr;
}

