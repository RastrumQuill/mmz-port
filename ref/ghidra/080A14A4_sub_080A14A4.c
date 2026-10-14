// sub_080A14A4 at 0x080A14A4 (thumb)

undefined4 sub_080A14A4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  undefined auStack_18 [4];
  
  sub_080C8D70(auStack_18,&DAT_080c94b4,4);
  *(undefined *)(param_1 + 0xd) = 0;
  if ((DAT_02022ae1 & 0x20) != 0) {
    *(undefined *)(param_1 + 0xd) = 1;
  }
  if ((DAT_02022ae1 & 0x40) != 0) {
    *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 2;
  }
  if (*(char *)(param_1 + 0xd) != *(char *)(param_1 + 0xf)) {
    *(undefined *)(param_1 + 0xe) = 1;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xd);
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,auStack_18[*(byte *)(param_1 + 0xd)]);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_0809C980(param_1);
  if (*(char *)(param_1 + 0x12) == '\0') {
    if ((*(byte *)(param_1 + 0xd) & 2) == 0) {
      if ((*(ushort *)(param_1 + 0x90) & 8) == 0) {
        return in_lr;
      }
      sub_08001EAC(5);
      DAT_02022ae1 = DAT_02022ae1 & 0xdf | 0x40;
    }
    else {
      if ((*(ushort *)(param_1 + 0x90) & 8) == 0) {
        return in_lr;
      }
      sub_08001EAC(5);
      DAT_02022ae1 = DAT_02022ae1 & 0xbf | 0x20;
    }
    cVar1 = '\b';
  }
  else {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
  }
  *(char *)(param_1 + 0x12) = cVar1;
  return in_lr;
}

