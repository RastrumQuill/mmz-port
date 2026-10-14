// sub_0804EFFC at 0x0804EFFC (thumb)

undefined4 sub_0804EFFC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((((*(char *)(param_1 + 0x10) == '\0') &&
       (sub_0804EA84(param_1), *(char *)(param_1 + 0x10) == '\0')) &&
      (((*(uint *)(param_1 + 0x8c) & 0x200) != 0 || (*(short *)(param_1 + 0xa4) == 0)))) &&
     ((DAT_0202ec38 & 0x10) == 0)) {
    iVar1 = (int)*(short *)(param_1 + 0xd0);
    if (iVar1 != -1) {
      sub_08003338(iVar1);
      *(short *)(param_1 + 0xd0) = -1;
    }
    if (((DAT_0202ec38 & 1) != 0) && ((DAT_0202ec42 & 1) == 0)) {
      DAT_0202ec38 = DAT_0202ec38 & 0xfffe | 0x20;
    }
    *(undefined *)(param_1 + 0xcd) = 0;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = (&DAT_0833c074)[*(byte *)(param_1 + 0xd)];
    sub_0804F0E4(param_1);
  }
  else {
    sub_080EF118(param_1,*(undefined4 *)(&DAT_0833bf9c + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080EF118(param_1,*(undefined4 *)(&DAT_0833bff8 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}

