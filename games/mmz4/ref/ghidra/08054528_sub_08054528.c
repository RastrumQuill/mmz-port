// sub_08054528 at 0x08054528 (thumb)

undefined4 sub_08054528(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(*(int *)(param_1 + 0xc4) + 0xb8) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0xbc) = 8;
    *(undefined *)(*(int *)(param_1 + 200) + 0xb8) = 0;
    *(undefined2 *)(*(int *)(param_1 + 200) + 0xbc) = 8;
    sub_0801CF00(param_1,0x2c00);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08054FBC(param_1);
  iVar1 = sub_08055074(param_1,0);
  if (((iVar1 == 0) && (*(short *)(*(int *)(param_1 + 0xc4) + 0xbc) == 0)) &&
     (*(short *)(*(int *)(param_1 + 200) + 0xbc) == 0)) {
    sub_08054FFC(param_1);
  }
  return in_lr;
}

