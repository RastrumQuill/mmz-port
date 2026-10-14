// sub_080322BC at 0x080322BC (thumb)

undefined4 sub_080322BC(int param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,3);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 6;
  }
  sub_080297C0(param_1);
  iVar3 = *(int *)(param_1 + 0x58) + 0x100;
  *(int *)(param_1 + 0x58) = iVar3;
  if (-0x40 < iVar3) {
    *(undefined4 *)(param_1 + 0x58) = 0xffffffc0;
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    if (*(short *)(param_1 + 0xcc) == 0) {
      uVar2 = 9;
    }
    else {
      uVar2 = 10;
    }
    *(undefined *)(param_1 + 0xd) = uVar2;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0x13) = 0;
  }
  return in_lr;
}

