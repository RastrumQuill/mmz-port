// sub_080B98EC at 0x080B98EC (thumb)

undefined4 sub_080B98EC(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xf) = 0x3c;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    uVar1 = *(uint *)(*(int *)(param_1 + 0x2c) + 0xdf4);
    if (*(uint *)(param_1 + 0x54) < uVar1) {
      *(uint *)(param_1 + 0xc0) = uVar1;
    }
    else {
      *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0x54);
    }
    *(int *)(param_1 + 0xbc) = *(int *)(DAT_0202dbf0 + 0x58) + -0x1400;
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + -1;
  sub_080B9958(param_1);
  return in_lr;
}

