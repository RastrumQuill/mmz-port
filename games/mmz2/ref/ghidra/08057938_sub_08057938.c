// sub_08057938 at 0x08057938 (thumb)

undefined4 sub_08057938(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if ((((*(uint *)(param_1 + 0x14) & 4) == 0) ||
      (*(char *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 8) != '\0')) ||
     (*(char *)(iVar2 + 0xd) != '\x17')) goto LAB_08057974;
  bVar1 = *(byte *)(iVar2 + 0xe);
  if (bVar1 != 4) {
    if (bVar1 < 5) {
      if (bVar1 != 2) goto LAB_08057974;
    }
    else if (bVar1 != 8) goto LAB_08057974;
  }
  sub_0805799C(iVar2);
LAB_08057974:
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    *(bool *)(iVar2 + 0x13) = *(int *)(iVar2 + 0x54) < *(int *)(DAT_0202e130 + 0x54);
  }
  return in_lr;
}

