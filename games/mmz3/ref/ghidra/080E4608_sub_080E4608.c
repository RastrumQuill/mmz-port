// sub_080E4608 at 0x080E4608 (thumb)

undefined4 sub_080E4608(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xf) = 0x40;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  if ((*(byte *)(iVar2 + 0xc) < 2) &&
     (cVar1 = sub_080E162C(*(undefined4 *)(param_1 + 0xb4)), cVar1 != '\0')) {
    cVar1 = *(char *)(param_1 + 0xf) + -1;
    *(char *)(param_1 + 0xf) = cVar1;
    if (cVar1 == -1) {
      *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) & 0x7f;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else {
      *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x80;
    }
  }
  else {
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) & 0x7f;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

