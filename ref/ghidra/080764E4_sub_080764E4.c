// sub_080764E4 at 0x080764E4 (thumb)

undefined4 sub_080764E4(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = DAT_02022f74;
  if ((DAT_02022b60 == 1) ||
     (((((DAT_02022b64 & 1) != 0 && ((DAT_02022b6e & 1) == 0)) && ((DAT_02022b70 & 1) == 0)) &&
      ((DAT_02022874 == '\0' && (DAT_02022880 == '\0')))))) {
    DAT_02022f78 = 0;
  }
  else {
    DAT_02022f78 = 1;
  }
  sub_08005410(DAT_02022f74);
  iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 4);
  *(int *)(iVar1 + 0xc) = iVar2;
  while (iVar2 != iVar1 + 0x14) {
    sub_080C8A98(iVar2,*(undefined4 *)(iVar2 + 0x14));
    iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 4);
    *(int *)(iVar1 + 0xc) = iVar2;
  }
  return in_lr;
}

