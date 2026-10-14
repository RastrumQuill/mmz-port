// sub_080DFFB4 at 0x080DFFB4 (thumb)

undefined4 sub_080DFFB4(int param_1)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar4 = 0x2600 - *(short *)(param_1 + 0x5c0);
  iVar6 = -0x1a00 - *(short *)(param_1 + 0x5c2);
  uVar1 = sub_080EEF7C(iVar4 * iVar4 + iVar6 * iVar6);
  if (uVar1 == 0) {
    iVar4 = -0x100;
    iVar6 = 0;
  }
  else {
    iVar4 = sub_080EF150(iVar4 * 0x100,uVar1);
    iVar6 = sub_080EF150(iVar6 * 0x100,uVar1);
  }
  if (0x1ff < uVar1) {
    piVar2 = (int *)(param_1 + 0x5d0);
    iVar4 = *piVar2 * iVar4;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar6 = *piVar2 * iVar6;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    piVar5 = (int *)(param_1 + 0x5c8);
    iVar4 = ((iVar4 >> 8) - *piVar5) * 6;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *piVar5 = *piVar5 + (iVar4 >> 8);
    piVar3 = (int *)(param_1 + 0x5cc);
    iVar4 = ((iVar6 >> 8) - *piVar3) * 6;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *piVar3 = *piVar3 + (iVar4 >> 8);
    *(short *)(param_1 + 0x5c0) = *(short *)(param_1 + 0x5c0) + (short)*piVar5;
    *(short *)(param_1 + 0x5c2) = *(short *)(param_1 + 0x5c2) + (short)*piVar3;
    iVar4 = *piVar2;
    *piVar2 = iVar4 + 1;
    if (0x140 < iVar4 + 1) {
      *piVar2 = 0x140;
    }
    piVar2 = (int *)(param_1 + 0x5dc);
    iVar4 = *piVar2;
    *piVar2 = iVar4 + 1;
    if (0x100 < iVar4 + 1) {
      *piVar2 = 0x100;
    }
  }
  return in_lr;
}

