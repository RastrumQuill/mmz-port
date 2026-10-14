// sub_080526F0 at 0x080526F0 (thumb)

undefined4 sub_080526F0(int param_1)

{
  char cVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(param_1 + 0x12) = 4;
    *(undefined *)(param_1 + 0xf) = 1;
  }
  sub_080128D4(param_1);
  pbVar2 = (byte *)(param_1 + 0xb6);
  if (((*pbVar2 & 2) == 0) || (cVar1 = sub_08057A70(param_1), cVar1 != '\0')) {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  else {
    *pbVar2 = *pbVar2 & 0xfd;
    *(undefined *)(param_1 + 0xe) = 7;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

