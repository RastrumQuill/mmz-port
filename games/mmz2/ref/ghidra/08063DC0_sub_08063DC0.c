// sub_08063DC0 at 0x08063DC0 (thumb)

undefined4 sub_08063DC0(int param_1)

{
  char cVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    pbVar2 = (byte *)(param_1 + 0xd0);
    sub_080A9734(param_1,0,*pbVar2 & 1);
    *pbVar2 = *pbVar2 + 1;
    *(undefined *)(param_1 + 0x12) = 0x80;
    sub_080032EC(0x91);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

