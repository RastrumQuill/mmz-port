// sub_080E45A8 at 0x080E45A8 (thumb)

undefined4 sub_080E45A8(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xe) = 1;
  }
  if ((*(byte *)(*(int *)(param_1 + 0x2c) + 0xc) < 2) &&
     (cVar1 = sub_080E162C(*(undefined4 *)(param_1 + 0xb4)), cVar1 != '\0')) {
    if (0x1000 < (*(int *)(param_1 + 100) - *(int *)(param_1 + 0x54)) + 0x800U) {
      return in_lr;
    }
    if (0x1000 < (*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x58)) + 0x800U) {
      return in_lr;
    }
    uVar2 = 2;
  }
  else {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    uVar2 = 3;
  }
  *(undefined *)(param_1 + 0xd) = uVar2;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

