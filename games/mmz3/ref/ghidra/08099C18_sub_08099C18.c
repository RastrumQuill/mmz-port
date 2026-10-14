// sub_08099C18 at 0x08099C18 (thumb)

undefined4 sub_08099C18(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_08099B38();
  if (cVar1 == '\0') {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08366e54 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08366e70 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}

