// sub_08054AB8 at 0x08054AB8 (thumb)

undefined4 sub_08054AB8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x57);
    sub_0801CF00(param_1,0x2c00);
    sub_08055178(param_1,0xc,0);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  iVar1 = sub_08055194(param_1,*(undefined4 *)(param_1 + 0xb8));
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xb8);
    *(undefined *)(param_1 + 0xb7) = 0;
    *(undefined *)(param_1 + 0xe) = 4;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

