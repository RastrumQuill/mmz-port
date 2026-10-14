// sub_080CDE60 at 0x080CDE60 (thumb)

undefined4 sub_080CDE60(int param_1)

{
  byte bVar1;
  bool bVar2;
  undefined uVar3;
  undefined2 uVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x11) != '\0') && (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc))) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080CE0D8(param_1);
    return in_lr;
  }
  iVar6 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar6;
  if (*(int *)(param_1 + 0x60) < 0) {
    iVar8 = 0x1000;
  }
  else {
    iVar8 = -0x1000;
  }
  iVar6 = iVar6 + iVar8;
  if (*(char *)(param_1 + 0xf) == '\0') {
    if ((0x9000 < (*(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54)) + 0x4800U) ||
       (0x9000 < (*(int *)(DAT_0202e130 + 0x58) - *(int *)(param_1 + 0x58)) + 0x4800U)) {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
      uVar3 = 1;
LAB_080cdf46:
      *(undefined *)(param_1 + 0xf) = uVar3;
    }
  }
  else if (((*(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54)) + 0x4800U < 0x9001) &&
          ((*(int *)(DAT_0202e130 + 0x58) - *(int *)(param_1 + 0x58)) + 0x4800U < 0x9001)) {
    if (*(char *)(param_1 + 0xd) == '\0') {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
      *(undefined **)(param_1 + 0x30) = &DAT_08349864;
      uVar4 = 0xe;
    }
    else {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
      *(undefined **)(param_1 + 0x30) = &DAT_08349864;
      uVar4 = 0x401;
    }
    *(undefined2 *)(param_1 + 0x26) = uVar4;
    uVar3 = 0;
    goto LAB_080cdf46;
  }
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    sub_080127E4(param_1,0x7901);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_08349864;
    *(undefined2 *)(param_1 + 0x26) = 0x401;
    sub_080032EC(0x40);
    *(undefined *)(param_1 + 0xf) = 1;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_080cdfe6:
    sub_080128D4(param_1);
    bVar1 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if (((bVar1 & 0xf) == 0) &&
       (sVar5 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
       sVar5 == 0)) {
      uVar7 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar7 & 0x7fffffff;
      uVar3 = sub_080EF330(uVar7 * 2 >> 0x11,3);
      sub_080BC2E0(param_1,1,uVar3,0);
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (*(char *)(param_1 + 0x12) != '\0') {
        *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
        sub_08006E08(param_1 + 0x74,&DAT_0834986c);
      }
      sub_080128D4(param_1);
      if (((*(uint *)(param_1 + 0x8c) & 1) != 0) && ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x30)) {
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
    }
  }
  else if (bVar1 == 2) goto LAB_080cdfe6;
  if (*(char *)(param_1 + 0xe) == '\0') {
    sVar5 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),iVar6);
    if (sVar5 != 0) {
      return in_lr;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    return in_lr;
  }
  bVar2 = false;
  sVar5 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),iVar6);
  if (sVar5 == 0) {
    if (*(char *)(param_1 + 0x11) != '\0') {
      if (*(char *)(param_1 + 0x10) == '\x01') {
        if (DAT_0202ed54 + 0x4fff < iVar6) goto LAB_080ce0ae;
      }
      else if (iVar6 < DAT_0202ed54 + -0x5000) {
        bVar2 = true;
      }
    }
    if (!bVar2) {
      return in_lr;
    }
  }
LAB_080ce0ae:
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  sub_080CE0D8(param_1);
  return in_lr;
}

