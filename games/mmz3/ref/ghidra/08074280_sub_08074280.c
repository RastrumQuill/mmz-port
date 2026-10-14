// sub_08074280 at 0x08074280 (thumb)

undefined4 sub_08074280(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x10) == '\x01') && (*(int *)(param_1 + 0x2c) != 0)) {
    bVar1 = *(byte *)(*(int *)(param_1 + 0x2c) + 0xc);
    if (2 < bVar1) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      return in_lr;
    }
    if (1 < bVar1) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      *(undefined *)(param_1 + 0xd) = 1;
      return in_lr;
    }
  }
  cVar2 = sub_08073EEC(param_1);
  if (cVar2 == '\0') {
    sub_0807407C(param_1);
    cVar2 = sub_08073F98(param_1);
    if (cVar2 == '\0') {
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_083635f8 + (uint)*(byte *)(param_1 + 0xd) * 4));
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08363628 + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
  }
  return in_lr;
}

