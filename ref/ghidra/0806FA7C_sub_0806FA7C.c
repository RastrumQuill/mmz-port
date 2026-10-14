// sub_0806FA7C at 0x0806FA7C (thumb)

undefined4 sub_0806FA7C(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(ushort *)(param_1 + 0x1a) & 1) != 0) {
    iVar2 = *(int *)(param_1 + 0x40);
    if ((*(char *)(iVar2 + 0x10) != '\x02') && (iVar1 = *(int *)(iVar2 + 0x24), iVar1 != 0)) {
      *(byte *)(iVar1 + 0x41) = *(byte *)(iVar1 + 0x41) & 0xf | 0xd0;
      *(undefined *)(iVar1 + 0x1e) = 0xd;
    }
    *(int *)(iVar2 + 0xbc) =
         *(int *)(*(int *)(*(int *)(param_1 + 0x10) + 0x40) + 0x4c) - *(int *)(iVar2 + 0x4c);
  }
  return in_lr;
}

