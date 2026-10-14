// sub_08057CCC at 0x08057CCC (thumb)

undefined4 sub_08057CCC(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xb8) != 0) && (iVar2 = sub_08025794(), iVar2 != 0)) {
    *(int *)(param_1 + 0xb8) = 0;
  }
  cVar1 = sub_08057AAC(param_1);
  if (cVar1 == '\0') {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_083604e4 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08360538 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}

