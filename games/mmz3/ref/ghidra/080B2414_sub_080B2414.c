// sub_080B2414 at 0x080B2414 (thumb)

undefined4 sub_080B2414(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = DAT_0203062c;
  sub_080070C0(DAT_0203062c);
  while( true ) {
    iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 4);
    *(int *)(iVar1 + 0xc) = iVar2;
    if (iVar2 == iVar1 + 0x14) break;
    if (DAT_0202f5d0 == '\0') {
      sub_080FE2C0(iVar2,*(undefined4 *)(iVar2 + 0x14));
    }
    else if (*(char *)(iVar2 + 9) == '0') {
      sub_080FE2C0(iVar2,*(undefined4 *)(iVar2 + 0x14));
    }
  }
  return in_lr;
}

