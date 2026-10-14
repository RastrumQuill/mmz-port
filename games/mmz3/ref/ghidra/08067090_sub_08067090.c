// sub_08067090 at 0x08067090 (thumb)

undefined4 sub_08067090(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x8c) & 0x200) == 0) ||
     ((*(char *)(param_1 + 0xd) == '\b' && (iVar2 = sub_08063614(param_1), iVar2 == 0)))) {
    iVar2 = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54);
    if (iVar2 < 1) {
      iVar2 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202f5c0 + 0x54);
    }
    if (iVar2 < 0x11801) {
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08362668 + (uint)*(byte *)(param_1 + 0xd) * 4));
      sub_08068010(param_1);
      cVar1 = *(char *)(param_1 + 0xd);
      if ((((cVar1 != '\b') && (cVar1 != '\x05')) && (cVar1 != '\a')) &&
         (iVar2 = sub_08063614(param_1), iVar2 != 0)) {
        return in_lr;
      }
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836268c + (uint)*(byte *)(param_1 + 0xd) * 4));
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0x11) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  sub_08067160(param_1);
  return in_lr;
}

