// sub_080975E0 at 0x080975E0 (thumb)

undefined4 sub_080975E0(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(int *)(param_1 + 0xb4) < *(int *)(param_1 + 0x54)) {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffe40;
      uVar2 = 0xfffff000;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0x1c0;
      uVar2 = 0x1000;
    }
    *(undefined4 *)(param_1 + 100) = uVar2;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (*(int *)(param_1 + 0x5c) < 0) goto LAB_08097632;
      sub_0801CF00(param_1,0x5004);
    }
    else {
      if (*(int *)(param_1 + 0x5c) < 1) {
        uVar2 = 0x5004;
      }
      else {
LAB_08097632:
        uVar2 = 0x5003;
      }
      sub_0801CF00(param_1,uVar2);
    }
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == 0x5003) {
    if (((*(char *)(param_1 + 0x71) == '\x02') || (*(char *)(param_1 + 0x71) == '\x06')) &&
       (*(char *)(param_1 + 0x72) < '\x02')) {
      sub_08002B10(0x137);
    }
  }
  else if (((*(char *)(param_1 + 0x71) == '\x03') || (*(char *)(param_1 + 0x71) == '\a')) &&
          (*(char *)(param_1 + 0x72) < '\x02')) {
    sub_08002B10(0x137);
  }
  iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar3;
  iVar3 = sub_08008534(iVar3,*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar3;
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if (((0x20 < bVar1) &&
      ((*(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54)) + 0x3000U < 0x6001)) &&
     ((*(int *)(DAT_0202dbf0 + 0x58) - iVar3) + 0x3000U < 0x6001)) goto LAB_0809773e;
  if (*(int *)(param_1 + 0x5c) < 1) {
    iVar3 = *(int *)(param_1 + 0xb4);
    if (*(int *)(param_1 + 0x54) < iVar3) goto LAB_08097734;
  }
  else {
    iVar3 = *(int *)(param_1 + 0xb4);
    if (iVar3 < *(int *)(param_1 + 0x54)) {
LAB_08097734:
      *(int *)(param_1 + 0x54) = iVar3;
    }
  }
  if (*(int *)(param_1 + 0x54) != *(int *)(param_1 + 0xb4)) {
    return in_lr;
  }
LAB_0809773e:
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

