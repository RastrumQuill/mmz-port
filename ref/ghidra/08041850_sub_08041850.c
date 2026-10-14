// sub_08041850 at 0x08041850 (thumb)

undefined4 sub_08041850(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,3);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x40;
    sub_08001EAC(0xa1);
  }
  sub_080297C0(param_1);
  if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
    sub_08084ECC(param_1,0,0);
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 0x20;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xca) = 0;
  }
  return in_lr;
}

