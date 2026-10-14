// sub_0809CFE8 at 0x0809CFE8 (thumb)

undefined4 sub_0809CFE8(int param_1)

{
  byte bVar1;
  undefined uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
LAB_0809d014:
    if (0 < *(int *)(param_1 + 0x58)) {
      sub_0809C930(param_1,5);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return in_lr;
      }
      sub_0809C930(param_1,0);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto LAB_0809d014;
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return in_lr;
      }
      sub_0809C980(param_1);
      uVar5 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
      *(undefined4 *)(param_1 + 0x50) = uVar5;
      cVar3 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar3;
      if (cVar3 != '\0') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 0;
      uVar2 = 0;
      goto LAB_0809d098;
    }
  }
  if (*(int *)(param_1 + 0x58) < 0x700) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  sub_0809C980(param_1);
  if (*(int *)(param_1 + 0x58) < 0) {
    return in_lr;
  }
  iVar4 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (*(int *)(param_1 + 0x50) <= iVar4) {
    return in_lr;
  }
  *(int *)(param_1 + 0x50) = iVar4;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined *)(param_1 + 0x12) = 4;
  uVar2 = 3;
LAB_0809d098:
  *(undefined *)(param_1 + 0xe) = uVar2;
  return in_lr;
}

