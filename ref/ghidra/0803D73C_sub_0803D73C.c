// sub_0803D73C at 0x0803D73C (thumb)

undefined4 sub_0803D73C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 8;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    sub_08001EAC(0x3c);
    sub_08029778(param_1,1);
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xf) = 2;
    *(undefined *)(param_1 + 0x12) = 0x20;
  }
  sub_080297C0(param_1);
  return in_lr;
}

