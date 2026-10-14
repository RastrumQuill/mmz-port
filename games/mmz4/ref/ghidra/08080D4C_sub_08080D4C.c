// sub_08080D4C at 0x08080D4C (thumb)

undefined4 sub_08080D4C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(undefined *)(param_1 + 0xf) = 1;
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)(&DAT_0885af38 +
                        (uint)*(byte *)(param_1 + 0xb5) * 4 +
                        (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) -
                        0x1800) * 8)));
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xe) = 8;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

