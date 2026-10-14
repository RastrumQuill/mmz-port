// sub_0806CD84 at 0x0806CD84 (thumb)

undefined4 sub_0806CD84(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((*(ushort *)(param_1 + 0x1a) & 1) != 0) {
    iVar2 = *(int *)(param_1 + 0x40);
    iVar3 = *(int *)(iVar2 + 0x20);
    iVar1 = sub_08048BE8(iVar3);
    if (iVar1 == 0) {
      *(undefined *)(iVar2 + 0xd) = 1;
      *(undefined *)(iVar3 + 0xc5) = 1;
    }
  }
  return in_lr;
}

