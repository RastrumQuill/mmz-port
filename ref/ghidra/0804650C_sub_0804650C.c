// sub_0804650C at 0x0804650C (thumb)

undefined4 sub_0804650C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,3);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x18;
  }
  sub_080297C0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 0x17;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

