// sub_080BCF88 at 0x080BCF88 (thumb)

undefined4 sub_080BCF88(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = DAT_0202ed94;
  if ((DAT_0202e910 == 1) ||
     (((((DAT_0202e918 & 1) != 0 && ((DAT_0202e922 & 1) == 0)) && ((DAT_0202e924 & 1) == 0)) &&
      ((DAT_0202dbf8 == '\0' && (DAT_0202dc08 == '\0')))))) {
    DAT_0202ed98 = 0;
  }
  else {
    DAT_0202ed98 = 1;
  }
  sub_080054B4(DAT_0202ed94);
  iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 4);
  *(int *)(iVar1 + 0xc) = iVar2;
  while (iVar2 != iVar1 + 0x14) {
    sub_08128884(iVar2,*(undefined4 *)(iVar2 + 0x14));
    iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 4);
    *(int *)(iVar1 + 0xc) = iVar2;
  }
  return in_lr;
}

