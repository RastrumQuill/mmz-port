// sub_08093ABC at 0x08093ABC (thumb)

undefined4 sub_08093ABC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_0885d088);
    sub_0801CF00(param_1,0x400b);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if ((DAT_0202ea30 - *(int *)(param_1 + 0x54)) + 0x9800U < 0x13001) {
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

