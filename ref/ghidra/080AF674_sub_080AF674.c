// sub_080AF674 at 0x080AF674 (thumb)

undefined4 sub_080AF674(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
LAB_080af6da:
    sub_0809C980(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x38;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0x87;
      sub_0809C930(param_1,1);
      sub_08001EAC(0x20);
      *(int *)(param_1 + 0xc4) = *(int *)(*(int *)(param_1 + 0xbc) + 0x4c) + 0x3800;
      *(undefined4 *)(param_1 + 200) = *(undefined4 *)(*(int *)(param_1 + 0xbc) + 0x50);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto LAB_080af6da;
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return in_lr;
      }
      goto LAB_080af744;
    }
  }
  sub_0809C980(param_1);
  *(int *)(*(int *)(param_1 + 0xbc) + 0x4c) = *(int *)(*(int *)(param_1 + 0xbc) + 0x4c) + 0x100;
  if (*(char *)(param_1 + 0x12) == '(') {
    DAT_02022c8c = param_1 + 0xc4;
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 != '\0') {
    return in_lr;
  }
  sub_0809C930(param_1,2);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined **)(param_1 + 0x28) = &DAT_082b6960;
  sub_08001EAC(0x20);
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_080af744:
  sub_0809C980(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    DAT_02022b70 = DAT_02022b70 & 0xfffe;
    DAT_02022c8c = *(int *)(param_1 + 0xbc) + 0x4c;
    sub_0801D5DC();
    sub_08001EAC(0x1f);
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

