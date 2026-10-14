// sub_08041210 at 0x08041210 (thumb)

undefined4 sub_08041210(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined2 *)(*(int *)(param_1 + 0xb4 + (*(byte *)(param_1 + 0x13) + 4) * 4) + 0xbe) = 0x1d1a;
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  uVar2 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  if (*(char *)(param_1 + 0xf) == '\0') {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      sub_080127E4(param_1,0xa20b);
      *(undefined2 *)(*(int *)(param_1 + 0xb4 + (*(byte *)(param_1 + 0xbe) + 4) * 4) + 0xbe) =
           0x1d17;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
    sub_080128D4(param_1);
  }
  else {
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      if (*(byte *)(param_1 + 0xbd) < 6) {
        *(undefined *)(param_1 + 0xd) = 3;
      }
      else {
        *(undefined *)(param_1 + 0xd) = 0xe;
      }
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

