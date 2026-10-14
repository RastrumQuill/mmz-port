// sub_080EC094 at 0x080EC094 (thumb)

undefined4 sub_080EC094(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0800249C(6,0x2c0);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  uVar1 = sub_080025D8(6);
  sub_0801CFF0(param_1);
  if ((*(char *)(param_1 + 0xb4) == '\0') && ((uVar1 & 0xff) - 3 < 2)) {
    sub_08002624(6);
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

