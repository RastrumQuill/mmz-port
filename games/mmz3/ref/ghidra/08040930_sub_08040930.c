// sub_08040930 at 0x08040930 (thumb)

undefined4 sub_08040930(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xb4) != 0) && (iVar2 = sub_08025794(), iVar2 != 0)) {
    *(int *)(param_1 + 0xb4) = 0;
  }
  cVar1 = sub_08040730(param_1);
  if (cVar1 == '\0') {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835e5d4 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835e620 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}

