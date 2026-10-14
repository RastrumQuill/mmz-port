// sub_0800F79C at 0x0800F79C (thumb)

undefined4 sub_0800F79C(int param_1)

{
  ushort uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 in_lr;
  
  uVar1 = *(ushort *)(param_1 + 0x10);
  iVar2 = sub_08001B60(0x280);
  if (iVar2 != 0) {
    DAT_03001708 = &DAT_0400001c;
    DAT_0300170c = 0xa6600001;
    puVar3 = (uint *)(iVar2 + 0x13c);
    DAT_03001704 = iVar2;
    do {
      *puVar3 = (uint)(uVar1 >> 6);
      puVar3 = puVar3 + -1;
    } while (iVar2 <= (int)puVar3);
    puVar3 = (uint *)(iVar2 + 0x140);
    iVar4 = 7;
    do {
      *puVar3 = (uint)(uVar1 >> 5);
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    iVar4 = 0x58;
    puVar3 = (uint *)(iVar2 + 0x160);
    do {
      *puVar3 = (uint)(uVar1 >> 3);
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x70);
    if (iVar4 < 0xa0) {
      puVar3 = (uint *)(iVar4 * 4 + iVar2);
      do {
        *puVar3 = (uint)(uVar1 >> 2);
        puVar3 = puVar3 + 1;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0xa0);
    }
  }
  return in_lr;
}

