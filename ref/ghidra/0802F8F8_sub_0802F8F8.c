// sub_0802F8F8 at 0x0802F8F8 (thumb)

undefined4 sub_0802F8F8(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08029778(param_1,0x15);
    *(undefined *)(param_1 + 0x12) = 0x21;
    *(undefined *)(param_1 + 0xc3) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080297C0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 0x12;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

