// sub_0805AB9C at 0x0805AB9C (thumb)

undefined4 sub_0805AB9C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    if ((*(int *)(param_1 + 200) != 0) && (*(char *)(param_1 + 0xbf) == '\x02')) {
      *(undefined *)(*(int *)(param_1 + 200) + 0xb4) = 1;
    }
    sub_08005784(param_1 + 0x74,&DAT_088553a8);
    sub_0801CF00(param_1,0xa30a);
    *(undefined *)(param_1 + 0xbd) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

