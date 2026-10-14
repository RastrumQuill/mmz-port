// sub_080F4EC8 at 0x080F4EC8 (thumb)

undefined4 sub_080F4EC8(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0xbc);
  sub_0801CFF0();
  iVar6 = *(int *)(param_1 + 0x58);
  if (((*(int *)(param_1 + 0xbc) == 0) || (*(char *)(iVar4 + 0xd) != '\x03')) ||
     (*(byte *)(iVar4 + 0xe) < 2)) {
    piVar1 = (int *)(param_1 + 0xb8);
    iVar4 = *(int *)(param_1 + 0x58);
    if (iVar4 < *piVar1) {
      iVar2 = 0x200;
LAB_080f4f82:
      *(int *)(param_1 + 0x58) = iVar4 + iVar2;
      if (*(int *)(param_1 + 0x58) <= *piVar1) goto LAB_080f4f98;
      *(int *)(param_1 + 0x58) = *piVar1;
    }
    else {
      if (*piVar1 < iVar4) {
        iVar2 = -0x200;
        goto LAB_080f4f82;
      }
LAB_080f4f98:
      iVar4 = *piVar1 + (uint)*(byte *)(param_1 + 0xc0) * -0x1000;
      if (*(int *)(param_1 + 0x58) < iVar4) {
        *(int *)(param_1 + 0x58) = iVar4;
      }
    }
    psVar5 = (short *)(param_1 + 0xc2);
    if (*psVar5 == 0x77) {
      sub_08002B10(0x19d);
      *psVar5 = 0x19d;
    }
    if (iVar6 != *(int *)(param_1 + 0x58)) {
      if (*psVar5 != 0xa4) {
        sub_08002B10(0xa4);
        *psVar5 = 0xa4;
      }
      goto LAB_080f4fee;
    }
    if (*psVar5 != 0xa4) goto LAB_080f4fee;
    uVar3 = 0x19e;
  }
  else {
    if ((*(uint *)(iVar4 + 600) & 0x40) != 0) {
      *(int *)(param_1 + 0x58) = iVar6 + -0x200;
    }
    if ((*(uint *)(iVar4 + 600) & 0x80) != 0) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x200;
    }
    iVar4 = *(int *)(param_1 + 0xb8);
    if (iVar4 < *(int *)(param_1 + 0x58)) {
      *(int *)(param_1 + 0x58) = iVar4;
    }
    else {
      iVar4 = iVar4 + (uint)*(byte *)(param_1 + 0xc0) * -0x1000;
      if (*(int *)(param_1 + 0x58) < iVar4) {
        *(int *)(param_1 + 0x58) = iVar4;
      }
    }
    if (iVar6 != *(int *)(param_1 + 0x58)) {
      if (*(short *)(param_1 + 0xc2) != 0x77) {
        sub_08002B10(0x77);
        *(short *)(param_1 + 0xc2) = 0x77;
      }
      goto LAB_080f4fee;
    }
    if (*(short *)(param_1 + 0xc2) != 0x77) goto LAB_080f4fee;
    uVar3 = 0x19d;
  }
  sub_08002B10(uVar3);
  *(undefined2 *)(param_1 + 0xc2) = uVar3;
LAB_080f4fee:
  *(undefined4 *)(param_1 + 0xbc) = 0;
  return in_lr;
}

