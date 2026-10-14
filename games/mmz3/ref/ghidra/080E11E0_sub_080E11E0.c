// sub_080E11E0 at 0x080E11E0 (thumb)

void sub_080E11E0(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(*(int *)(param_2 + 0x74) + 0x10);
  cVar1 = *(char *)(param_2 + 9);
  if (cVar1 == '\x0e') {
    if (*(byte *)(param_2 + 0x10) < 2) {
      iVar2 = -0x8000000;
    }
    else if (*(byte *)(param_2 + 0x10) < 4) {
      iVar2 = 0x800;
    }
  }
  else if (cVar1 == '\n') {
    iVar2 = -0xd000000;
  }
  else if (cVar1 == '1') {
    iVar2 = -0x14000000;
  }
  if ((*(byte *)(param_2 + 10) & 0x10) == 0) {
    iVar3 = *(int *)(param_2 + 0x54) + (int)(short)iVar2;
  }
  else {
    iVar3 = *(int *)(param_2 + 0x54) - (int)(short)iVar2;
  }
  if ((*(byte *)(param_2 + 10) & 0x20) == 0) {
    iVar2 = *(int *)(param_2 + 0x58) + (iVar2 >> 0x10);
  }
  else {
    iVar2 = *(int *)(param_2 + 0x58) - (iVar2 >> 0x10);
  }
  *param_1 = iVar3;
  param_1[1] = iVar2;
  return;
}

