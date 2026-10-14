// sub_0801273C at 0x0801273C (thumb)

undefined4 sub_0801273C(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = 0x9f;
  iVar1 = sub_08000A70(0x280);
  if (iVar1 != 0) {
    DAT_03001708 = &DAT_0400001c;
    DAT_0300170c = 0xa6600001;
    uVar2 = (*(int *)(param_1 + 0x38) + -0x460) * 0x10000;
    puVar4 = (uint *)(iVar1 + 0x27c);
    DAT_03001704 = iVar1;
    do {
      *puVar4 = uVar2;
      puVar4 = puVar4 + -1;
      iVar6 = iVar6 + -1;
    } while (0x50 < iVar6);
    iVar3 = sub_08128A24(*(undefined2 *)(param_1 + 0x10),6);
    iVar5 = *(int *)(param_1 + 0x34);
    if (-1 < iVar6) {
      puVar4 = (uint *)(iVar6 * 4 + iVar1);
      do {
        *puVar4 = iVar3 + (iVar5 >> 6) & 0xffffU | uVar2;
        puVar4 = puVar4 + -1;
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
    }
  }
  return in_lr;
}

