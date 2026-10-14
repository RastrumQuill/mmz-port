// sub_08034140 at 0x08034140 (thumb)

undefined4 sub_08034140(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0);
    *(undefined *)(param_1 + 0xe) = 0;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0xb8) + 0xc800;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xbc) + 0x3c00;
    uVar1 = sub_08008360();
    *(undefined4 *)(param_1 + 0x50) = uVar1;
  }
  sub_080297C0(param_1);
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

