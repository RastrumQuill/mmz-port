// sub_08054698 at 0x08054698 (thumb)

undefined4 sub_08054698(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x57);
    sub_08055058(param_1,4,*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0xc0));
    sub_0801CF00(param_1,0x2c00);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  iVar1 = sub_08055074(param_1,*(undefined4 *)(param_1 + 0xc0));
  if (iVar1 == 0) {
    *(undefined *)(param_1 + 0xe) = 3;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

