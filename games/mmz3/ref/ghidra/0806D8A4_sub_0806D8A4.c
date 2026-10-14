// sub_0806D8A4 at 0x0806D8A4 (thumb)

undefined4 sub_0806D8A4(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0x1700);
    *(undefined *)(param_1 + 0x12) = 0x78;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(undefined *)(param_1 + 0xbf) = 1;
  sVar2 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0xb00);
  if (sVar2 == 0) {
    *(undefined *)(param_1 + 0xd) = 0;
  }
  else {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 3;
  }
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

