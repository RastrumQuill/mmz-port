// sub_0803D108 at 0x0803D108 (thumb)

undefined4 sub_0803D108(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0xb4);
  sub_0801CFF0();
  if (CONCAT11(*(undefined *)(iVar1 + 0x1e),*(undefined *)(iVar1 + 0x70)) == 0x1a01) {
    iVar2 = (uint)*(byte *)(param_1 + 0x71) << 0x18;
    if ((int)*(char *)(iVar1 + 0x71) == iVar2 >> 0x18) {
      sub_08005794(param_1 + 0x74,
                   *(undefined4 *)
                    ((char)*(byte *)(param_1 + 0x71) * 4 +
                    *(int *)(&DAT_08851ad4 + (uint)*(byte *)(param_1 + 0x10) * 4)),
                   *(undefined *)(param_1 + 0xc1),*(undefined *)(param_1 + 0xc0),
                   *(undefined *)(param_1 + 0xc2),(iVar2 >> 0x19) + 1);
      return in_lr;
    }
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0xc);
  return in_lr;
}

