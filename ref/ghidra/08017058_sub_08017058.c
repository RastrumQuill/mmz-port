// sub_08017058 at 0x08017058 (thumb)

void sub_08017058(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x4c);
  iVar2 = *(int *)(param_1 + 0xcc);
  if (iVar3 != iVar2) {
    *(bool *)(param_1 + 0x44) = iVar2 < iVar3;
    if (iVar2 < iVar3) {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
  return;
}

