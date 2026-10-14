// sub_080B7A64 at 0x080B7A64 (thumb)

undefined4 sub_080B7A64(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CC9C(param_1);
    sub_0801CEEC(param_1);
    sub_0801CF00(param_1,0xb200);
    *(undefined *)(param_1 + 0x25) = 0x17;
  }
  sub_0801CFF0(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(iVar1 + 0x54) + -0x200;
  *(int *)(param_1 + 0x58) = *(int *)(iVar1 + 0x58) + 0x2800;
  if (*(char *)(iVar1 + 0xd6) != '\0') {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

