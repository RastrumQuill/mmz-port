// sub_08005ED8 at 0x08005ED8 (thumb)

undefined4 sub_08005ED8(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  uVar5 = 0;
  do {
    uVar2 = uVar5 + 1;
    if (((int)(uint)DAT_02004fa1 >> (uVar5 & 0xff) & 1U) != 0) {
      iVar4 = 0;
      do {
        iVar3 = iVar4 + uVar5;
        iVar4 = iVar4 + 1;
        for (iVar3 = (&DAT_02004fb0)[iVar3]; iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
          if (*(short *)(iVar3 + 0x18) == 0) {
            uVar1 = *(ushort *)(iVar3 + 0x1c) | 0x40;
          }
          else {
            *(undefined2 *)(iVar3 + 0x18) = 0;
            uVar1 = *(ushort *)(iVar3 + 0x1c) | 0x41;
          }
          *(ushort *)(iVar3 + 0x1c) = uVar1;
        }
      } while (iVar4 < 1);
    }
    uVar5 = uVar2;
  } while ((int)uVar2 < 3);
  return in_lr;
}

