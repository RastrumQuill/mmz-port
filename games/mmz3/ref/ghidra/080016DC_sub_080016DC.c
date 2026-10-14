// sub_080016DC at 0x080016DC (thumb)

int * sub_080016DC(int param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  
  cVar3 = param_1 * 4 == 0;
  iVar1 = FUN_08000784();
  if (cVar3 == '\0') {
    iVar1 = 1;
  }
  DAT_02001740 = (char)iVar1;
  piVar2 = &DAT_02001040;
  if (iVar1 != 0) {
    piVar2 = &DAT_02001030;
  }
  if ((*piVar2 != 0x42345745) ||
     ((uint)*(ushort *)(piVar2 + 1) != *(uint *)(&DAT_0800178c + param_1 * 4))) {
    piVar2 = (int *)0xff;
  }
  return piVar2;
}

