// sub_08051650 at 0x08051650 (thumb)

undefined4 sub_08051650(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xc0) != 0) && (iVar2 = sub_08025794(), iVar2 != 0)) {
    *(int *)(param_1 + 0xc0) = 0;
  }
  cVar1 = sub_08051338(param_1);
  if (cVar1 == '\0') {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835fdc8 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835fdec + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}

