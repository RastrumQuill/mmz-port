// sub_0802F510 at 0x0802F510 (thumb)

undefined4 sub_0802F510(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  char *pcVar4;
  undefined4 in_lr;
  char local_14 [4];
  
  pcVar4 = (char *)(param_1 + 0xee);
  if (*pcVar4 == '\0') {
    sub_08017700(param_1,0x1a01);
    *(undefined *)(param_1 + 0x12a) = 0;
    sub_08038394(param_1,0x15);
    *pcVar4 = *pcVar4 + '\x01';
  }
  else {
    cVar1 = sub_080341A4(param_1,local_14);
    if ((cVar1 != '\0') && (local_14[0] == '\x01')) {
      *(char *)(param_1 + 0x12a) = *(char *)(param_1 + 0x12a) + '\x01';
    }
    sub_08034558(param_1,0x1a01);
    if (*(char *)(param_1 + 0x73) == '\x04') {
      if ((*(char *)(param_1 + 0x12a) == '\0') ||
         (cVar1 = sub_08034818(param_1,0x2d), cVar1 == '\0')) {
        *(undefined *)(param_1 + 0xed) = 1;
        *(undefined *)(param_1 + 0xee) = 0;
      }
      else {
        *(char *)(param_1 + 0x12a) = '\0';
      }
    }
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    sVar2 = sub_08032D6C(param_1);
    iVar3 = -(int)sVar2;
  }
  else {
    sVar2 = sub_08032D6C(param_1);
    iVar3 = (int)sVar2;
  }
  *(int *)(param_1 + 0x5c) = iVar3;
  return in_lr;
}

