// sub_080339F4 at 0x080339F4 (thumb)

undefined4 sub_080339F4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    sub_0800561C(param_1 + 0x74,&DAT_082ad494);
    *(undefined *)(param_1 + 0x12) = 0x3c;
  }
  sub_080297C0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 0x1d;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

