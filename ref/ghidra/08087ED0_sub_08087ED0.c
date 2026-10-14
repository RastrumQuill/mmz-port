// sub_08087ED0 at 0x08087ED0 (thumb)

undefined4 sub_08087ED0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (*(char *)(iVar1 + 0xd) != '\x01') {
      sub_080033F0(param_1 + 0x6c,4);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    }
  }
  else if (*(char *)(param_1 + 0x73) == '\x03') goto LAB_08087f4a;
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if ((*(byte *)(iVar1 + 0xc) < 2) && (iVar1 = sub_08048BE8(iVar1), iVar1 == 0)) {
    return in_lr;
  }
LAB_08087f4a:
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
  return in_lr;
}

