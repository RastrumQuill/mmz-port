// sub_08078AC0 at 0x08078AC0 (thumb)

undefined4 sub_08078AC0(int param_1)

{
  char cVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if ((1 < *(byte *)(iVar4 + 0xc)) || (*(char *)(iVar4 + 0xd) == '\t')) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  sub_080128D4(param_1);
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + 1;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    sVar2 = sub_08008CFC();
    goto joined_r0x08078bec;
  case 1:
    psVar3 = (short *)(param_1 + 0xbc);
    *psVar3 = *psVar3 + -1;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x68);
    if (*psVar3 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 8;
    break;
  case 2:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_080032EC(0x94);
    sub_080796B0(param_1);
    break;
  case 3:
    *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + 1;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    sVar2 = sub_08008CFC();
joined_r0x08078bec:
    if (sVar2 == 0) {
      return in_lr;
    }
    break;
  case 4:
    psVar3 = (short *)(param_1 + 0xbc);
    *psVar3 = *psVar3 + -1;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x68);
    if (*psVar3 != 0) {
      return in_lr;
    }
    *(uint *)(param_1 + 0x54) =
         *(int *)(iVar4 + 0x54) + (uint)*(byte *)(param_1 + 0x11) * 0x1000 + -0x800;
    *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) + -0x300;
    break;
  default:
    goto switchD_08078b26_caseD_5;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_08078b26_caseD_5:
  return in_lr;
}

