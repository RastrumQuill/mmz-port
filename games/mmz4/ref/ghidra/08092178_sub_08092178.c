// sub_08092178 at 0x08092178 (thumb)

undefined4 sub_08092178(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0x1e;
    sub_08005784(param_1 + 0x74,&DAT_0885cf1c);
    sub_0801CF00(param_1,*(undefined2 *)
                          (&DAT_0885cf6e + ((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 2)));
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

