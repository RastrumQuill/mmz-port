// sub_080880B0 at 0x080880B0 (thumb)

undefined4 sub_080880B0(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = DAT_0202300c;
  sub_08005410(DAT_0202300c);
  while( true ) {
    iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 4);
    *(int *)(iVar1 + 0xc) = iVar2;
    if (iVar2 == iVar1 + 0x14) break;
    if (DAT_02022878 == '\0') {
      sub_080C8A98(iVar2,*(undefined4 *)(iVar2 + 0x14));
    }
    else if (*(char *)(iVar2 + 9) == 'L') {
      sub_080C8A98(iVar2,*(undefined4 *)(iVar2 + 0x14));
    }
  }
  return in_lr;
}

