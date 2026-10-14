// sub_0809A964 at 0x0809A964 (thumb)

void sub_0809A964(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 8);
  if (*(byte *)(iVar2 + 0xc) < 2) {
    iVar1 = *(int *)(iVar2 + 0x4c) - *(int *)(param_2 + 8) >> 8;
    iVar2 = *(int *)(iVar2 + 0x74) >> 8;
    iVar3 = iVar1 - iVar2;
    iVar1 = iVar1 + iVar2;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    else if (0xf0 < iVar3) {
      iVar3 = 0xf0;
    }
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    else if (0xf0 < iVar1) {
      iVar1 = 0xf0;
    }
    DAT_02004f86 = (ushort)iVar1 & 0xff | (ushort)(iVar3 << 8);
    DAT_02004f8a = 0xa1;
  }
  return;
}

