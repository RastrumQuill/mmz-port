// sub_0802C50C at 0x0802C50C (thumb)

undefined4 sub_0802C50C(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 in_lr;
  
  bVar1 = false;
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08017700(param_1,0x200);
    if (*(int *)(param_1 + 0x238) < *(int *)(param_1 + 0x54)) {
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffe00;
    }
    else {
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined4 *)(param_1 + 0x5c) = 0x200;
    }
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  else {
    iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar2;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (iVar2 < *(int *)(param_1 + 0x238)) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x238);
        bVar1 = true;
      }
    }
    else if (*(int *)(param_1 + 0x238) < iVar2) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x238);
      goto LAB_0802c5b2;
    }
  }
  if (!bVar1) {
    return in_lr;
  }
LAB_0802c5b2:
  sub_08017700(param_1,0x3600);
  *(undefined *)(param_1 + 0xe) = 2;
  *(undefined *)(param_1 + 0xf) = 0;
  return in_lr;
}

