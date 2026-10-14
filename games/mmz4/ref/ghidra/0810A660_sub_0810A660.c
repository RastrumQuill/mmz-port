// sub_0810A660 at 0x0810A660 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_0810A660(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_0801CFF0();
  if (*(char *)(param_1 + 0x7c) == '\0') {
    iVar1 = *(int *)(param_1 + 0x74);
    if ((iVar1 == 0) && (*(int *)(param_1 + 0x78) == 0)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      *(int *)(param_1 + 0x54) = iVar1;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x78);
      if (0x100 < _DAT_02000a10) {
        *(int *)(param_1 + 0x54) = iVar1 + 0x20000;
      }
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

