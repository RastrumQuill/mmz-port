// sub_08075D98 at 0x08075D98 (thumb)

undefined4 sub_08075D98(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    if ((*(char *)(param_1 + 0xb9) == '\0') && ((DAT_02030108 & 0x40) != 0)) {
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
    if (*(char *)(param_1 + 0x10) != '\0') goto LAB_08075e14;
  }
  if ((*(char *)(param_1 + 0xb9) != '\0') && (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc))) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
LAB_08075e14:
  cVar1 = sub_08075AD0(param_1);
  if (cVar1 == '\0') {
    sub_08075C1C(param_1);
    cVar1 = sub_08075B58(param_1);
    if (cVar1 == '\0') {
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08363898 + (uint)*(byte *)(param_1 + 0xd) * 4));
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_083638c0 + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
  }
  return in_lr;
}

