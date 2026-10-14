// sub_08061CC4 at 0x08061CC4 (thumb)

undefined4 sub_08061CC4(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08006E08(param_1 + 0x74,&DAT_0833d4b8);
    iVar1 = *(int *)(param_1 + 0xb8) + -0x1000;
    *(int *)(param_1 + 0xb8) = iVar1;
    if (*(int *)(param_1 + 0x58) < iVar1) {
      *(undefined *)(param_1 + 0xc9) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xc9) = 0x80;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar2 = *(int *)(param_1 + 0x58);
  iVar1 = iVar2 + -0x80;
  *(int *)(param_1 + 0x58) = iVar1;
  piVar3 = (int *)(param_1 + 0xb8);
  if (iVar1 < *piVar3) {
    iVar1 = iVar2 + 0x80;
  }
  *(int *)(param_1 + 0x58) = iVar1;
  if ((*piVar3 - iVar1) + 0x100U < 0x200) {
    *piVar3 = iVar1;
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080128D4(param_1);
  return in_lr;
}

