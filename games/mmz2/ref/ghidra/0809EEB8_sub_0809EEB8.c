// sub_0809EEB8 at 0x0809EEB8 (thumb)

undefined4 sub_0809EEB8(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  if (1 < *(byte *)(iVar5 + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar3 = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc);
    goto LAB_0809f076;
  }
  sub_080128D4(param_1);
  if (((((*(uint *)(param_1 + 0x8c) & 4) != 0) && (DAT_0202e130 != 0)) &&
      ((*(uint *)(DAT_0202e130 + 0x8c) & 0x200) == 0)) && (*(short *)(DAT_0202e130 + 0xa4) != 0)) {
    if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54)) {
      uVar3 = 0x180;
    }
    else {
      uVar3 = 0xfffffe80;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    sub_080230C4(DAT_0202e130,*(undefined4 *)(param_1 + 0x5c));
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar4 = *(int *)(iVar5 + 0x54) + 0x300;
  }
  else {
    iVar4 = *(int *)(iVar5 + 0x54) + -0x300;
  }
  *(int *)(param_1 + 0x54) = iVar4;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(int *)(param_1 + 0x58) = *(int *)(iVar5 + 0x58) + -0x2900;
    if (*(char *)(param_1 + 0xd) == '\0') {
      uVar3 = 0x3308;
      goto LAB_0809efc4;
    }
  }
  else if (*(char *)(param_1 + 0x10) == '\b') {
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xc0);
    if (*(char *)(param_1 + 0xd) == '\0') {
      uVar3 = 0x3305;
LAB_0809efc4:
      sub_080127E4(param_1,uVar3);
      sub_080128D4(param_1);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else {
    iVar4 = (*(int *)(param_1 + 0xc0) + 0x2900) - *(int *)(iVar5 + 0x58);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 7;
    }
    *(uint *)(param_1 + 0x58) =
         *(int *)(iVar5 + 0x58) + (iVar4 >> 3) * (uint)*(byte *)(param_1 + 0x10) + -0x2900;
    if (*(char *)(param_1 + 0xd) == '\0') {
      uVar3 = 0x3302;
      goto LAB_0809efc4;
    }
  }
  cVar1 = *(char *)(param_1 + 0xd);
  if (cVar1 == '\x01') {
    sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0xc0) + 0x100);
    if (sVar2 != 0) {
      return in_lr;
    }
    *(char *)(param_1 + 0x12) = ('\b' - *(char *)(param_1 + 0x10)) * '\x04';
    goto LAB_0809f04a;
  }
  if (cVar1 != '\x02') {
    if (cVar1 != '\x03') {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar3 = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
LAB_0809f076:
    *(undefined4 *)(param_1 + 0x14) = uVar3;
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 != -1) {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar3 = 0x3309;
LAB_0809f02e:
    sub_080127E4(param_1,uVar3);
  }
  else {
    if (*(char *)(param_1 + 0x10) == '\b') {
      uVar3 = 0x3306;
      goto LAB_0809f02e;
    }
    sub_080127E4(param_1,0x3303);
  }
  sub_080128D4(param_1);
LAB_0809f04a:
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}

