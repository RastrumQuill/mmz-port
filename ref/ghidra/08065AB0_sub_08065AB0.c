// sub_08065AB0 at 0x08065AB0 (thumb)

undefined4 sub_08065AB0(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 in_lr;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      cVar2 = *(char *)(param_1 + 0x13) + -4;
    }
    else {
      cVar2 = *(char *)(param_1 + 0x13) + '\x04';
    }
    *(char *)(param_1 + 0x13) = cVar2;
    iVar3 = *(int *)(param_1 + 0xc4);
    *(int *)(param_1 + 0xc4) = iVar3 + -1;
    if (iVar3 == 0) {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      *(undefined4 *)(param_1 + 0x58) = 0x20;
      *(undefined *)(param_1 + 0x12) = 0x40;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar3 = *(int *)(param_1 + 0x54) + 4;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x54) + -4;
      }
      *(int *)(param_1 + 0x54) = iVar3;
      if (*(int *)(param_1 + 0x54) == 0) {
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
        *(undefined4 *)(param_1 + 0x58) = 0;
        *(undefined4 *)(param_1 + 0xc4) = 0x200;
      }
    }
  }
  else if (bVar1 == 2) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar3 = *(int *)(param_1 + 0x54) + 0x10;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x54) + -0x10;
    }
    *(int *)(param_1 + 0x54) = iVar3;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    }
  }
  piVar4 = (int *)(param_1 + 0xbc);
  *piVar4 = *piVar4 + *(int *)(param_1 + 0x54);
  piVar5 = (int *)(param_1 + 0xc0);
  *piVar5 = *piVar5 + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x4c) = *piVar4 + (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x13) + 0x40] * 4;
  *(int *)(param_1 + 0x50) = *piVar5 + (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x13)] * 4;
  return in_lr;
}

