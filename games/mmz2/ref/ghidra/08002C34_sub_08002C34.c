// sub_08002C34 at 0x08002C34 (thumb)

undefined4 sub_08002C34(void)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = 0;
  piVar4 = &DAT_02000e50;
  piVar5 = piVar4;
  do {
    if (((&DAT_02000e40)[iVar6] != '\0') && (*(short *)(piVar4 + 4) == 0)) {
      iVar3 = *piVar4;
      bVar1 = *(byte *)(iVar3 + 1);
      sVar2 = ((ushort)*(byte *)(iVar3 + 2) - (ushort)bVar1) + 1;
      if ((*(ushort *)((int)piVar4 + 0x12) & 0x1ff) == 0) {
        sub_080EEF6C(iVar3 + (int)sVar2 *
                             (uint)*(byte *)(*(char *)((int)piVar4 + 0xd) * 2 +
                                            *(int *)((uint)*(byte *)(piVar4 + 3) * 4 + piVar4[2])) *
                             2 + 4,
                     (int)&DAT_03002ac0 + (uint)bVar1 * 2 + (uint)*(ushort *)((int)piVar4 + 0x12),
                     (int)sVar2 & 0x1fffff);
      }
      else {
        sub_080EEF6C(iVar3 + (int)sVar2 *
                             (uint)*(byte *)(*(char *)((int)piVar5 + 0xd) * 2 +
                                            *(int *)((uint)*(byte *)(piVar5 + 3) * 4 + piVar5[2])) *
                             2 + 4,
                     (int)&DAT_03002ac0 + (bVar1 & 0xf) * 2 + (uint)*(ushort *)((int)piVar5 + 0x12),
                     (int)sVar2 & 0x1fffff);
      }
    }
    piVar4 = piVar4 + 5;
    piVar5 = piVar5 + 5;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x10);
  return in_lr;
}

