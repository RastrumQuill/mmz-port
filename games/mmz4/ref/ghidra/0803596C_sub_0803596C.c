// sub_0803596C at 0x0803596C (thumb)

undefined4 sub_0803596C(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  char *pcVar4;
  undefined4 in_lr;
  char local_14 [4];
  
  pcVar4 = (char *)(param_1 + 0x102);
  if (*pcVar4 == '\0') {
    sub_0801CF00(param_1,0x1a01);
    *(undefined *)(param_1 + 0x146) = 0;
    sub_0803C490(param_1,0x15);
    *pcVar4 = *pcVar4 + '\x01';
  }
  else {
    cVar1 = sub_08039FE4(param_1,local_14);
    if ((cVar1 != '\0') && (local_14[0] == '\x01')) {
      *(char *)(param_1 + 0x146) = *(char *)(param_1 + 0x146) + '\x01';
    }
    sub_0803A3BC(param_1,0x1a01);
    if (*(char *)(param_1 + 0x73) == '\x04') {
      if ((*(char *)(param_1 + 0x146) == '\0') || (*(char *)(param_1 + 0xc5) != '\v')) {
        *(undefined *)(param_1 + 0x101) = 1;
        *(undefined *)(param_1 + 0x102) = 0;
      }
      else {
        *(char *)(param_1 + 0x146) = '\0';
      }
    }
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    sVar2 = sub_0803879C(param_1);
    iVar3 = -(int)sVar2;
  }
  else {
    sVar2 = sub_0803879C(param_1);
    iVar3 = (int)sVar2;
  }
  *(int *)(param_1 + 0x5c) = iVar3;
  return in_lr;
}

