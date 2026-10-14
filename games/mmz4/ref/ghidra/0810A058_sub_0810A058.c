// sub_0810A058 at 0x0810A058 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_0810A058(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  sub_08128884(param_1,*(undefined4 *)(&DAT_08869648 + (uint)*(byte *)(param_1 + 0x10) * 4));
  if ((*(char *)(iVar1 + 0xdce) == '\0') && (*(char *)(param_1 + 0x74) == '\0')) {
    sub_0801CFF0(param_1);
    if (0x100 < _DAT_02000a10) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x20000;
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088695c0)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

