// sub_0809B4D8 at 0x0809B4D8 (thumb)

undefined4 sub_0809B4D8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  cVar1 = *(char *)(param_1 + 0xbd) + -7;
  *(char *)(param_1 + 0xbd) = cVar1;
  *(char *)(param_1 + 0x24) = cVar1;
  if ((*(byte *)(iVar3 + 0xc) < 2) && (iVar2 = sub_08065A24(iVar3), iVar2 == 0)) {
    if (*(char *)(iVar3 + 0xd) == '\v') {
      sub_0809B1D4(param_1,1,*(undefined *)(param_1 + 0x11));
      sub_0809B1D4(param_1,1,*(byte *)(param_1 + 0x11) | 0x10);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc);
    }
    else {
      sub_080128D4(param_1);
    }
  }
  else {
    sub_080B2A10(param_1 + 0x54,2,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_0809B2D4(param_1);
  }
  return in_lr;
}

