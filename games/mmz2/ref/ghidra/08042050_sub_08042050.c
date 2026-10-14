// sub_08042050 at 0x08042050 (thumb)

undefined4 sub_08042050(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xe01);
    *(undefined2 *)(param_1 + 0xd8) = 0xe08;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar2 = 0x40;
    }
    else {
      uVar2 = 0xffffffc0;
    }
    *(undefined4 *)(param_1 + 100) = uVar2;
    *(undefined *)(param_1 + 0x12) = 0x30;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar3 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar3;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - iVar3 / 2;
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 9;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

