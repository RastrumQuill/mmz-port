// sub_080B2F14 at 0x080B2F14 (thumb)

undefined4 sub_080B2F14(int param_1)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar1 = sub_081284E0((*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0x54)) * 0x100 >> 0x10,
                         (*(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0x58)) * 0x100 >> 0x10);
    uVar3 = (uint)(iVar1 << 0x10) >> 0x18;
    *(int *)(param_1 + 0x5c) =
         (int)*(short *)((int)&DAT_08128c10 + ((uVar3 + 0x40) * 0x1000000 >> 0x17));
    *(int *)(param_1 + 0x60) = (int)(short)(&DAT_08128c10)[uVar3];
    *(undefined *)(param_1 + 0xb4) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar4;
  iVar1 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar1;
  pcVar2 = (char *)(param_1 + 0xb4);
  piVar6 = (int *)(param_1 + 0xc0);
  if (*pcVar2 == '\0') {
    iVar4 = iVar4 - *piVar6 >> 8;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (iVar4 < 0x10) {
      piVar5 = (int *)(param_1 + 0xbc);
      iVar1 = iVar1 - *piVar5 >> 8;
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if (iVar1 < 0x10) {
        *pcVar2 = '\x01';
        iVar1 = sub_081284E0((*piVar6 - *(int *)(param_1 + 0x54)) * 0x100 >> 0x10,
                             (*piVar5 - *(int *)(param_1 + 0x58)) * 0x100 >> 0x10);
        uVar3 = (uint)(iVar1 << 0x10) >> 0x18;
        *(int *)(param_1 + 0x5c) =
             (int)*(short *)((int)&DAT_08128c10 + ((uVar3 + 0x40) * 0x1000000 >> 0x17));
        *(int *)(param_1 + 0x60) = (int)(short)(&DAT_08128c10)[uVar3];
        if (*piVar5 < *(int *)(param_1 + 0x58)) {
          *(undefined *)(param_1 + 0xf) = 0;
        }
        else {
          *(undefined *)(param_1 + 0xf) = 1;
        }
        goto LAB_080b3014;
      }
    }
    sub_080B3344(param_1);
  }
LAB_080b3014:
  iVar4 = *(int *)(param_1 + 0x54);
  iVar1 = iVar4 - *piVar6;
  if (iVar1 < 0) {
    iVar1 = *piVar6 - iVar4;
  }
  if (iVar1 < 0x200) {
    iVar1 = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0xbc);
    if (iVar1 < 0) {
      iVar1 = *(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0x58);
    }
    if (iVar1 < 0x200) {
      *pcVar2 = *piVar6 <= iVar4;
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xb7) = 0;
    }
  }
  return in_lr;
}

