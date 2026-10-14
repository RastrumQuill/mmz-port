// sub_0809D0A0 at 0x0809D0A0 (thumb)

undefined4 sub_0809D0A0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0809C930(param_1,2);
    sub_08001EAC(0x13);
    if (DAT_02022b27 + -2 < 3) {
      DAT_02022b27 = '\x02';
    }
    else {
      DAT_02022b27 = DAT_02022b27 + -2;
    }
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar2 = 0x40;
    }
    else {
      uVar2 = 0xffffffc0;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar2;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar3 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (iVar3 < *(int *)(param_1 + 0x50)) {
    *(int *)(param_1 + 0x50) = iVar3;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  else {
    if (*(int *)(param_1 + 0x58) < 0x700) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
    }
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  }
  cVar1 = sub_080079CC(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54),
                       *(undefined4 *)(param_1 + 0x50));
  if (cVar1 == '\0') {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  }
  sub_0809C980(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

