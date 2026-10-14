// sub_0801558C at 0x0801558C (thumb)

undefined4 sub_0801558C(int param_1)

{
  short sVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = 0x9f;
  puVar2 = (uint *)sub_08000A70(0x280);
  if (puVar2 != (uint *)0x0) {
    DAT_03001708 = &DAT_0400001c;
    DAT_0300170c = 0xa6600001;
    iVar3 = *(int *)(param_1 + 0x34);
    uVar6 = (*(int *)(param_1 + 0x38) + -0x2c0) * 0x10000;
    iVar4 = (int)uVar6 >> 0x10;
    DAT_03001704 = puVar2;
    if (0xa7 < iVar4 + 0x9f) {
      puVar5 = puVar2 + 0x9f;
      do {
        *puVar5 = uVar6 | (uint)(iVar3 << 0xe) >> 0x10;
        puVar5 = puVar5 + -1;
        iVar7 = iVar7 + -1;
        if (iVar4 + iVar7 < 0xa8) break;
      } while (-1 < iVar7);
    }
    sVar1 = (short)iVar7;
    iVar7 = *(int *)(param_1 + 0x34);
    iVar3 = 0;
    if (-1 < sVar1) {
      iVar4 = (int)(short)((short)*(undefined4 *)(param_1 + 0x38) + -0x140);
      if (iVar4 < 0xa0) {
        puVar5 = puVar2;
        do {
          *puVar5 = iVar4 << 0x10 | (uint)(iVar7 << 0xf) >> 0x10;
          puVar5 = puVar5 + 1;
          iVar3 = iVar3 + 1;
          if (sVar1 < iVar3) {
            return in_lr;
          }
        } while (iVar4 + iVar3 < 0xa0);
      }
      if (iVar3 <= sVar1) {
        uVar6 = iVar3 * -0x10000 + 0xa00000;
        puVar2 = puVar2 + iVar3;
        do {
          *puVar2 = uVar6;
          puVar2 = puVar2 + 1;
          uVar6 = uVar6 - 0x10000;
          iVar3 = iVar3 + 1;
        } while (iVar3 <= sVar1);
      }
    }
  }
  return in_lr;
}

