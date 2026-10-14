// sub_0803D198 at 0x0803D198 (thumb)

undefined4 sub_0803D198(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0xe);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 4;
  }
  sub_080297C0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 0xf;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

