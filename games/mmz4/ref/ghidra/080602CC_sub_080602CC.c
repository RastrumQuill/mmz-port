// sub_080602CC at 0x080602CC (thumb)

undefined4 sub_080602CC(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xa509);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_14 = *(int *)(param_1 + 0x54);
      iVar2 = -0xf00;
    }
    else {
      local_14 = *(int *)(param_1 + 0x54);
      iVar2 = 0xf00;
    }
    local_14 = local_14 + iVar2;
    local_10 = *(int *)(param_1 + 0x58) + -0xd00;
    sub_08099B6C(&local_14,0,0,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_08099B6C(&local_14,0,1,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_08099B6C(&local_14,0,2,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 10;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

