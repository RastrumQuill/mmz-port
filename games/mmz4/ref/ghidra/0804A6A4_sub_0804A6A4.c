// sub_0804A6A4 at 0x0804A6A4 (thumb)

undefined4 sub_0804A6A4(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    iVar2 = *(int *)(param_1 + 0x2c);
    *(bool *)(iVar2 + 0xbc) =
         *(int *)(iVar2 + 0x54) < *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 0x54);
    cVar1 = sub_0803A584(*(undefined4 *)(iVar2 + 0x28),5,8);
    if (cVar1 != '\0') {
      *(undefined *)(iVar2 + 0xbe) = 0;
      *(undefined4 *)(iVar2 + 0xc) = 2;
      *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(iVar2 + 9)] + 8);
    }
  }
  return in_lr;
}

