// sub_08046280 at 0x08046280 (thumb)

undefined4 sub_08046280(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x24);
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,8);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(iVar2 + 0x11) = 0;
  }
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 10;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 9;
    if (*(short *)(param_1 + 0x8c) < 0x20) {
      uVar1 = 0x20;
    }
    else if (*(short *)(param_1 + 0x8c) < 0x30) {
      uVar1 = 0x28;
    }
    else {
      uVar1 = 0x30;
    }
    *(undefined *)(param_1 + 0x12) = uVar1;
  }
  return in_lr;
}

