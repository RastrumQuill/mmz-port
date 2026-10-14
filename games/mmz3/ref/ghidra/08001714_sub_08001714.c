// sub_08001714 at 0x08001714 (thumb)

int * sub_08001714(int param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  
  param_1 = param_1 * 4;
  cVar3 = param_1 == 0;
  DAT_02001740 = FUN_08000784();
  if (cVar3 == '\0') {
    DAT_02001740 = '\x01';
  }
  iVar1 = 0;
  do {
    piVar2 = &DAT_02001040;
    if (iVar1 == 0) {
      piVar2 = &DAT_02001030;
    }
    if ((*piVar2 == 0x42345745) &&
       ((uint)*(ushort *)(piVar2 + 1) == *(uint *)(&DAT_0800178c + param_1))) {
      sub_08001794();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  piVar2 = &DAT_02001040;
  if (DAT_02001740 != '\0') {
    piVar2 = &DAT_02001030;
  }
  if ((*piVar2 != 0x42345745) ||
     ((uint)*(ushort *)(piVar2 + 1) != *(uint *)(&DAT_0800178c + param_1))) {
    piVar2 = (int *)0xff;
  }
  return piVar2;
}

