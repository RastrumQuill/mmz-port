// sub_08095584 at 0x08095584 (thumb)

undefined4 sub_08095584(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  undefined auStack_c [4];
  
  sub_08128B5C(auStack_c,&DAT_0812951c,4);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(param_1 + 0x12) = auStack_c[*(byte *)(param_1 + 0x11)];
    *(undefined *)(param_1 + 0xf) = 1;
  }
  sub_0801CFF0(param_1);
  sub_08095A8C(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

