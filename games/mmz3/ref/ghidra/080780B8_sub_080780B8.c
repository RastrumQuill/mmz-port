// sub_080780B8 at 0x080780B8 (thumb)

undefined4 sub_080780B8(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\x02') {
    if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
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
    sub_08077F78(param_1);
    cVar1 = sub_08077EDC(param_1);
  }
  else {
    cVar1 = sub_08077F00(param_1);
  }
  if (cVar1 == '\0') {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08363be0 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08363c04 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}

