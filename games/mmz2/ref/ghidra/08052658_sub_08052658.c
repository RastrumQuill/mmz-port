// sub_08052658 at 0x08052658 (thumb)

undefined4 sub_08052658(int param_1)

{
  char cVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    cVar1 = sub_08057A70();
    if (cVar1 != '\0') {
      sub_080032EC(0xec);
    }
    *(undefined *)(param_1 + 0xd1) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  pbVar2 = (byte *)(param_1 + 0xb6);
  if (((*pbVar2 & 2) == 0) || (cVar1 = sub_08057A70(param_1), cVar1 != '\0')) {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x02';
    sub_080128D4(param_1);
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x60) + (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12)] * 0x2a;
    if ((*(char *)(param_1 + 0x73) == '\x03') && (0x57 < *(byte *)(param_1 + 0x12))) {
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

