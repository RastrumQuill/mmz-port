// sub_080EC250 at 0x080EC250 (thumb)

undefined4 sub_080EC250(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0800249C(8,0x2e0);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080025D8(9);
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xb4) != '\0') {
    sub_08002624(8);
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

