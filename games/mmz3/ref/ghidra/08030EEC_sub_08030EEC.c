// sub_08030EEC at 0x08030EEC (thumb)

undefined4 sub_08030EEC(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_1 + 0xee);
  if (*pcVar2 == '\0') {
    sub_08017700(param_1,0x2d02);
    *pcVar2 = *pcVar2 + '\x01';
  }
  *(byte *)(param_1 + 0x124) = *(byte *)(param_1 + 0x124) | 4;
  cVar1 = sub_080341A4(param_1,param_1 + 0x128);
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_080177CC(param_1,0x500,4,1);
      *(undefined *)(param_1 + 0xec) = 0;
    }
  }
  else {
    *(undefined *)(param_1 + 0xec) = 3;
    *(undefined *)(param_1 + 0xed) = 0;
    sub_080306B4(param_1);
  }
  return in_lr;
}

