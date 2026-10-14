// sub_08093838 at 0x08093838 (thumb)

undefined4 sub_08093838(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_08093614();
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x10) == '\0') {
      sub_080936F8(param_1);
      cVar1 = sub_08093668(param_1);
      if (cVar1 != '\0') {
        return in_lr;
      }
    }
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_083665e0 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08366604 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}

