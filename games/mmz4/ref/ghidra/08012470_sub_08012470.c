// sub_08012470 at 0x08012470 (thumb)

undefined4 sub_08012470(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  
  iVar6 = 0x9f;
  iVar1 = sub_08000A70(0x280);
  if (iVar1 != 0) {
    DAT_03001708 = &DAT_0400001c;
    DAT_0300170c = 0xa6600001;
    iVar2 = *(int *)(param_1 + 0x34);
    uVar7 = *(int *)(param_1 + 0x38) - 0x140U & 0xffff;
    uVar5 = uVar7 * 0x10000;
    iVar3 = (int)uVar5 >> 0x10;
    DAT_03001704 = iVar1;
    if (0x47 < iVar3 + 0x9f) {
      puVar4 = (uint *)(iVar1 + 0x27c);
      do {
        *puVar4 = uVar5 | (uint)(iVar2 << 0xf) >> 0x10;
        puVar4 = puVar4 + -1;
        iVar6 = iVar6 + -1;
        if (iVar3 + iVar6 < 0x48) break;
      } while (-1 < iVar6);
    }
    iVar2 = *(int *)(param_1 + 0x34);
    uVar7 = uVar7 * 0x10000;
    iVar3 = (int)uVar7 >> 0x10;
    if ((0x37 < iVar3 + iVar6) && (-1 < iVar6)) {
      puVar4 = (uint *)(iVar6 * 4 + iVar1);
      do {
        *puVar4 = uVar7 | (uint)(iVar2 << 0xe) >> 0x10;
        puVar4 = puVar4 + -1;
        iVar6 = iVar6 + -1;
        if (iVar3 + iVar6 < 0x38) break;
      } while (-1 < iVar6);
    }
    iVar2 = *(int *)(param_1 + 0x34);
    if ((0x2f < iVar3 + iVar6) && (-1 < iVar6)) {
      puVar4 = (uint *)(iVar6 * 4 + iVar1);
      do {
        *puVar4 = uVar7 | (uint)(iVar2 << 0xd) >> 0x10;
        puVar4 = puVar4 + -1;
        iVar6 = iVar6 + -1;
        if (iVar3 + iVar6 < 0x30) break;
      } while (-1 < iVar6);
    }
    iVar2 = *(int *)(param_1 + 0x34);
    if ((-1 < iVar3 + iVar6) && (-1 < iVar6)) {
      puVar4 = (uint *)(iVar6 * 4 + iVar1);
      do {
        *puVar4 = uVar7 | (uint)(iVar2 << 0xc) >> 0x10;
        puVar4 = puVar4 + -1;
        iVar6 = iVar6 + -1;
        if (iVar3 + iVar6 < 0) {
          return in_lr;
        }
      } while (-1 < iVar6);
    }
  }
  return in_lr;
}

