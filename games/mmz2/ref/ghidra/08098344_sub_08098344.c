// sub_08098344 at 0x08098344 (thumb)

undefined4 sub_08098344(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = DAT_0202f07c;
  if ((DAT_0202ec30 == 1) ||
     (((((DAT_0202ec38 & 1) != 0 && ((DAT_0202ec42 & 1) == 0)) && ((DAT_0202ec44 & 1) == 0)) &&
      ((DAT_0202e138 == '\0' && (DAT_0202e14c == '\0')))))) {
    DAT_0202f080 = 0;
  }
  else {
    DAT_0202f080 = 1;
  }
  sub_08006B38(DAT_0202f07c);
  iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 4);
  *(int *)(iVar1 + 0xc) = iVar2;
  while (iVar2 != iVar1 + 0x14) {
    sub_080EF118(iVar2,*(undefined4 *)(iVar2 + 0x14));
    iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 4);
    *(int *)(iVar1 + 0xc) = iVar2;
  }
  return in_lr;
}

