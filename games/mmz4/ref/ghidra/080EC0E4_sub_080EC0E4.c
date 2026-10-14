// sub_080EC0E4 at 0x080EC0E4 (thumb)

undefined4 sub_080EC0E4(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0800249C(7,0x2c0);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  uVar1 = sub_080025D8(7);
  sub_0801CFF0(param_1);
  if ((uVar1 & 0xff) - 3 < 2) {
    sub_08002624(7);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

