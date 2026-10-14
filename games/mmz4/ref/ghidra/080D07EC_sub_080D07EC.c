// sub_080D07EC at 0x080D07EC (thumb)

undefined4 sub_080D07EC(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = DAT_0202ed9c;
  sub_080054B4(DAT_0202ed9c);
  while( true ) {
    iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 4);
    *(int *)(iVar1 + 0xc) = iVar2;
    if (iVar2 == iVar1 + 0x14) break;
    if (DAT_0202dc00 == '\0') {
      sub_08128884(iVar2,*(undefined4 *)(iVar2 + 0x14));
    }
    else if (*(char *)(iVar2 + 9) == '0') {
      sub_08128884(iVar2,*(undefined4 *)(iVar2 + 0x14));
    }
  }
  return in_lr;
}

