// sub_0805B758 at 0x0805B758 (thumb)

void sub_0805B758(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 0x40);
  iVar2 = *(int *)(iVar3 + 0x4c);
  if (*(int *)(*(int *)(param_1 + 0x40) + 0x4c) < iVar2) {
    iVar1 = 0x180;
  }
  else {
    iVar1 = -0x180;
  }
  *(int *)(iVar3 + 0x4c) = iVar2 + iVar1;
  return;
}

