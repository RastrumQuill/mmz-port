// sub_08025F84 at 0x08025F84 (thumb)

undefined4 sub_08025F84(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if ((*(char *)(iVar2 + 0x18a) == '\0') || (*(char *)(iVar2 + 0x18b) == '\0')) {
    bVar1 = *(byte *)(iVar2 + 0x19d);
    if ((uint)bVar1 != (uint)*(byte *)(param_1 + 0x12)) {
      *(byte *)(param_1 + 0x12) = bVar1;
      sub_08025C94(param_1,*(undefined2 *)(&DAT_082aa1e4 + (uint)bVar1 * 2),
                   (short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
    }
    sub_08025CE8(param_1);
  }
  else {
    sub_080261EC(param_1);
  }
  return in_lr;
}

