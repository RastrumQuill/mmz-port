// sub_0800E834 at 0x0800E834 (thumb)

undefined4 sub_0800E834(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = (*(int *)(param_1 + 0x38) - (DAT_0202d004 >> 8)) + 8;
  if (iVar4 < -0xb4) {
    iVar4 = -0xb4;
  }
  if (0 < iVar4) {
    iVar4 = 0;
  }
  puVar1 = (undefined2 *)sub_080008C8(0x140);
  if (puVar1 != (undefined2 *)0x0) {
    DAT_03001708 = &DAT_0400001a;
    DAT_0300170c = 0xa2600001;
    iVar3 = 0;
    puVar2 = puVar1;
    DAT_03001704 = puVar1;
    if (iVar4 < 0) {
      do {
        *puVar2 = 0x100;
        iVar3 = iVar3 + 1;
        if (iVar3 + iVar4 < 0 == SBORROW4(iVar3,-iVar4)) break;
        puVar2 = puVar2 + 1;
      } while (iVar3 < 0xa0);
    }
    if (iVar3 < 0xa0) {
      puVar1 = puVar1 + iVar3;
      do {
        *puVar1 = (short)iVar4;
        puVar1 = puVar1 + 1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0xa0);
    }
  }
  return in_lr;
}

