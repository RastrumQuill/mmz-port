// sub_0803D314 at 0x0803D314 (thumb)

undefined4 sub_0803D314(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x20;
    sub_08001EAC(0x3f);
  }
  sub_080297C0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 0x12;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

