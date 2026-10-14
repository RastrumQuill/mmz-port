// sub_080EC04C at 0x080EC04C (thumb)

undefined4 sub_080EC04C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0800249C(5,0x2c0);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080025D8(6);
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xb4) != '\0') {
    sub_08002624(5);
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

