// sub_080A1628 at 0x080A1628 (thumb)

undefined4 sub_080A1628(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x10) == '\0') goto LAB_080a165c;
    *(undefined *)(param_1 + 0x12) = 0x30;
    *(undefined *)(param_1 + 0xf) = 1;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 != '\0') {
    return in_lr;
  }
  if (DAT_0202e8d6 != '\0') {
    DAT_0202e8d6 = DAT_0202e8d6 + -1;
  }
LAB_080a165c:
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

