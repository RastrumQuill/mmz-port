// sub_080E455C at 0x080E455C (thumb)

undefined4 sub_080E455C(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xf) = 0x40;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    cVar1 = sub_080E162C(*(undefined4 *)(param_1 + 0xb4));
    if (cVar1 != '\0') {
      iVar2 = sub_080E1124(param_1 + 0x54);
      *(int *)(param_1 + 0x2c) = iVar2;
      if (iVar2 != 0) {
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
  }
  else {
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + -1;
  }
  return in_lr;
}

