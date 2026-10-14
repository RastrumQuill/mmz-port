// sub_08074AA4 at 0x08074AA4 (thumb)

undefined4 sub_08074AA4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((DAT_02022ae0 & 0x10) == 0) {
    if (((*(ushort *)(param_1 + 0x90) & 0x40) == 0) && (iVar1 = sub_08048BE8(param_1), iVar1 == 0))
    {
      if (*(char *)(param_1 + 0x10) == '\0') {
        sub_08074F9C(param_1);
      }
      else {
        sub_080750F0(param_1);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      sub_08074B24(param_1);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

