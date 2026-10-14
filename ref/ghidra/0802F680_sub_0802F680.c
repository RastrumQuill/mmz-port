// sub_0802F680 at 0x0802F680 (thumb)

undefined4 sub_0802F680(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xc3) = 6;
    sub_08029778(param_1,0x10);
    *(undefined *)(param_1 + 0x12) = 0xd;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080297C0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 0xd;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

