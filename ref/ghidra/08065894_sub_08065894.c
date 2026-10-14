// sub_08065894 at 0x08065894 (thumb)

void sub_08065894(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0x40);
  if (*(char *)(iVar2 + 8) == '\0') {
    if ((*(byte *)(*(int *)(param_1 + 0x40) + 10) & 0x10) == 0) {
      iVar1 = *(int *)(iVar2 + 0x4c);
      iVar3 = -0x840;
    }
    else {
      iVar1 = *(int *)(iVar2 + 0x4c);
      iVar3 = 0x840;
    }
    *(int *)(iVar2 + 0x4c) = iVar1 + iVar3;
  }
  return;
}

