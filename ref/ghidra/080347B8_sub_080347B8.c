// sub_080347B8 at 0x080347B8 (thumb)

undefined4 sub_080347B8(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,3);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 5;
  }
  sub_080297C0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 0xc;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0x13) = 2;
  }
  return in_lr;
}

