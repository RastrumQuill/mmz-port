// sub_0809C34C at 0x0809C34C (thumb)

undefined4 sub_0809C34C(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = DAT_020305f8;
  if ((DAT_020301a0 == 1) ||
     (((((DAT_020301a8 & 1) != 0 && ((DAT_020301b2 & 1) == 0)) && ((DAT_020301b4 & 1) == 0)) &&
      ((DAT_0202f5c8 == '\0' && (DAT_0202f5d8 == '\0')))))) {
    DAT_020305fc = 0;
  }
  else {
    DAT_020305fc = 1;
  }
  sub_080070C0(DAT_020305f8);
  iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 4);
  *(int *)(iVar1 + 0xc) = iVar2;
  while (iVar2 != iVar1 + 0x14) {
    sub_080FE2C0(iVar2,*(undefined4 *)(iVar2 + 0x14));
    iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 4);
    *(int *)(iVar1 + 0xc) = iVar2;
  }
  return in_lr;
}

