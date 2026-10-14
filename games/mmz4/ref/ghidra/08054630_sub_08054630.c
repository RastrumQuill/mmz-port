// sub_08054630 at 0x08054630 (thumb)

undefined4 sub_08054630(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x57);
    sub_0801CF00(param_1,0x2c00);
    sub_08055178(param_1,0xc,1);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  iVar2 = sub_08055194(param_1,*(int *)(param_1 + 0xbc) + 0xefff);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x54) == *(int *)(param_1 + 0xc0)) {
      uVar1 = 3;
    }
    else {
      uVar1 = 2;
    }
    *(undefined *)(param_1 + 0xe) = uVar1;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

