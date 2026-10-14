// sub_0809DA8C at 0x0809DA8C (thumb)

undefined4 sub_0809DA8C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0x6e03);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_10 = *(int *)(param_1 + 0x54);
      iVar2 = -0x1800;
    }
    else {
      local_10 = *(int *)(param_1 + 0x54);
      iVar2 = 0x1800;
    }
    local_10 = local_10 + iVar2;
    local_c = *(int *)(param_1 + 0x58) + -0x1e00;
    uVar1 = sub_0809E2F4(&local_10,0,1,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    sub_08002B10(0x2d);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

