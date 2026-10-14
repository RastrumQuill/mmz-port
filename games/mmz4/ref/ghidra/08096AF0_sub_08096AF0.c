// sub_08096AF0 at 0x08096AF0 (thumb)

undefined4 sub_08096AF0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if (((*(char *)(iVar2 + 0xd) == '\0') && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0)) &&
     (cVar1 = sub_0803A584(DAT_0202dbf0,5,1), cVar1 != '\0')) {
    *(undefined *)(iVar2 + 0x13) = 1;
    *(undefined4 *)(iVar2 + 0xc) = 2;
    *(undefined4 *)(iVar2 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(iVar2 + 9) * 4) + 8);
  }
  return in_lr;
}

