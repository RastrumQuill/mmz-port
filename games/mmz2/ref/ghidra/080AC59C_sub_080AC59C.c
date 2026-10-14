// sub_080AC59C at 0x080AC59C (thumb)

undefined4 sub_080AC59C(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = DAT_0202f084;
  sub_08006B38(DAT_0202f084);
  while( true ) {
    iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 4);
    *(int *)(iVar1 + 0xc) = iVar2;
    if (iVar2 == iVar1 + 0x14) break;
    if (DAT_0202e144 == '\0') {
      sub_080EF118(iVar2,*(undefined4 *)(iVar2 + 0x14));
    }
    else if (*(char *)(iVar2 + 9) == 'F') {
      sub_080EF118(iVar2,*(undefined4 *)(iVar2 + 0x14));
    }
  }
  return in_lr;
}

