// sub_08032EA8 at 0x08032EA8 (thumb)

undefined4 sub_08032EA8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  int local_10;
  undefined4 local_c;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0x12);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar1 = 0xfffffe00;
    }
    else {
      uVar1 = 0x200;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar1;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080297C0(param_1);
  iVar2 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar2;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar2;
  iVar2 = sub_08008360();
  if (iVar2 < *(int *)(param_1 + 0x50) + 0x1000) {
    uVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar1;
    *(undefined *)(param_1 + 0xd) = 0x1c;
    *(undefined *)(param_1 + 0xe) = 1;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_10 = *(int *)(param_1 + 0x4c) + -0x1800;
    }
    else {
      local_10 = *(int *)(param_1 + 0x4c) + 0x1800;
    }
    local_c = *(undefined4 *)(param_1 + 0x50);
    sub_0807A678(&local_10,10,0);
    sub_08001EAC(0x24);
  }
  return in_lr;
}

