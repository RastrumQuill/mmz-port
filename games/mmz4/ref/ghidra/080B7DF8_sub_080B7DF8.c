// sub_080B7DF8 at 0x080B7DF8 (thumb)

undefined4 sub_080B7DF8(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  int local_14;
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    local_14 = *(int *)(param_1 + 0x54) + 0x1500;
    local_10 = *(undefined4 *)(param_1 + 0x58);
    sub_080E3CBC(&local_14,3,0);
    sub_080E3CBC(&local_14,3,0);
    sub_080E3CBC(&local_14,3,0);
    sub_080E3CBC(&local_14,3,0);
    sub_080E3CBC(&local_14,3,0);
    sub_080E3CBC(&local_14,3,0);
    *(undefined4 *)(param_1 + 0x5c) = 0xffffff00;
    *(undefined4 *)(param_1 + 100) = 0xffffffc0;
    *(undefined *)(param_1 + 0xf) = 0;
    sub_08002B10(0x193);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar1 = *(char *)(param_1 + 0xf);
  if (cVar1 == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar3 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar3;
    if (iVar3 < -0x400) {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffc00;
    }
    uVar2 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
    if (uVar2 < 0x8001) goto LAB_080b7fe4;
    *(undefined4 *)(param_1 + 0x5c) = 0x400;
  }
  else {
    if (cVar1 == '\x01') {
      iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x54) = iVar3;
      if (iVar3 <= *(int *)(*(int *)(param_1 + 0x28) + 0xb4) + -0x1b00) goto LAB_080b7fe4;
      local_14 = iVar3 + 0x1500;
      local_10 = *(undefined4 *)(param_1 + 0x58);
      sub_080E3CBC(&local_14,3,0);
      sub_080E3CBC(&local_14,3,0);
      sub_080E3CBC(&local_14,3,0);
      sub_080E3CBC(&local_14,3,0);
      sub_080E3CBC(&local_14,3,0);
      sub_080E3CBC(&local_14,3,0);
      sub_0801CF00(param_1,0xb205);
      *(int *)(param_1 + 0x54) = *(int *)(*(int *)(param_1 + 0x28) + 0xb4) + -0x1b00;
      iVar3 = *(int *)(*(int *)(param_1 + 0x28) + 0xb8);
      iVar4 = 0x3700;
    }
    else {
      if (cVar1 != '\x02') {
        *(int *)(param_1 + 0x54) = *(int *)(*(int *)(param_1 + 0x28) + 0xb4) + 0x800;
        *(int *)(param_1 + 0x58) = *(int *)(*(int *)(param_1 + 0x28) + 0xb8) + 0x3000;
        if (*(char *)(param_1 + 0x73) == '\x03') {
          *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
          *(undefined *)(param_1 + 0xe) = 0;
        }
        goto LAB_080b7fe4;
      }
      *(int *)(param_1 + 0x54) = *(int *)(*(int *)(param_1 + 0x28) + 0xb4) + -0x1b00;
      *(int *)(param_1 + 0x58) = *(int *)(*(int *)(param_1 + 0x28) + 0xb8) + 0x3700;
      if (*(char *)(param_1 + 0x73) != '\x03') goto LAB_080b7fe4;
      sub_0801CD28(param_1);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
      sub_0801CEEC(param_1);
      sub_0801CF00(param_1,0xb202);
      sub_08005784(param_1 + 0x74,&DAT_08860b30);
      *(undefined *)(param_1 + 0x24) = 0xd9;
      *(int *)(param_1 + 0x54) = *(int *)(*(int *)(param_1 + 0x28) + 0xb4) + 0x800;
      iVar3 = *(int *)(*(int *)(param_1 + 0x28) + 0xb8);
      iVar4 = 0x3000;
    }
    *(int *)(param_1 + 0x58) = iVar3 + iVar4;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
LAB_080b7fe4:
  sub_0801CFF0(param_1);
  return in_lr;
}

