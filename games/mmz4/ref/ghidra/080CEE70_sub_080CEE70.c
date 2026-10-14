// sub_080CEE70 at 0x080CEE70 (thumb)

undefined4 sub_080CEE70(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_0801CC9C();
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 3;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
  *(byte *)(param_1 + 10) = bVar1 | 7;
  sub_08005760(param_1 + 0x74,&DAT_08863774,param_1 + 0x54,0xff);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  sub_0801CF00(param_1,*(undefined2 *)(&DAT_0886378c + (uint)*(byte *)(param_1 + 0x11) * 2));
  iVar2 = *(int *)(&DAT_08863794 + (uint)*(byte *)(param_1 + 0x11) * 4);
  *(int *)(param_1 + 0x5c) = iVar2;
  *(undefined4 *)(param_1 + 0x60) = 0xfffffb80;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar2 = iVar2 * -0x100;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar2 >> 8;
  }
  sub_080CEF10(param_1);
  return in_lr;
}

