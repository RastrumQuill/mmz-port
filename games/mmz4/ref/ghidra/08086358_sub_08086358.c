// sub_08086358 at 0x08086358 (thumb)

undefined4 sub_08086358(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_0885b7f8);
    sub_080868A4(param_1,4);
    *(undefined *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(char *)(param_1 + 0x13) != '\0') {
    iVar2 = sub_0810CCF0(*(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54),
                         (*(int *)(DAT_0202dbf0 + 0x58) + -0x2400) - *(int *)(param_1 + 0x58));
    *(int *)(param_1 + 0x5c) =
         (int)*(short *)((int)&DAT_08128c10 + (iVar2 * 0x1000000 + 0x40000000U >> 0x17)) / 2;
    *(int *)(param_1 + 0x60) =
         (int)*(short *)((int)&DAT_08128c10 + ((uint)(iVar2 * 0x1000000) >> 0x17)) / 2;
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(undefined *)(param_1 + 0x13) = 0;
  }
  sub_080868D8(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0x13) = 1;
  }
  return in_lr;
}

