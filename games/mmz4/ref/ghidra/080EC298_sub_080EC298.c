// sub_080EC298 at 0x080EC298 (thumb)

undefined4 sub_080EC298(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0800249C(9,0x2e0);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  uVar1 = sub_080025D8(9);
  sub_0801CFF0(param_1);
  if ((*(char *)(param_1 + 0xb4) == '\0') && ((uVar1 & 0xff) - 3 < 2)) {
    sub_08002624(9);
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

