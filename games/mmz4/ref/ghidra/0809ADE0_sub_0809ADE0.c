// sub_0809ADE0 at 0x0809ADE0 (thumb)

undefined4 sub_0809ADE0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(param_1 + 0xb7) = 0;
    sub_08005784(param_1 + 0x74,&DAT_0885db10);
    sub_0801CF00(param_1,0x6400);
    *(undefined *)(param_1 + 0x12) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if ((*(char *)(param_1 + 0x12) != '\0') && (*(char *)(param_1 + 0x71) == '\x04')) {
    sub_08005784(param_1 + 0x74,&DAT_0885db58);
    *(undefined *)(param_1 + 0x12) = 0;
  }
  if (*(char *)(param_1 + 0xb4) != '\0') {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

