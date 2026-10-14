// sub_080DCE08 at 0x080DCE08 (thumb)

undefined4 sub_080DCE08(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(byte *)(iVar1 + 1) < 2) {
    if ((*(byte *)(iVar1 + 1) == 0) || (*(char *)(iVar1 + 2) == '\0')) {
      if (((uint)*(byte *)(param_1 + 0x74) ==
           (uint)*(byte *)(*(int *)(iVar1 + 0x75b8) + 0x20a + (uint)*(byte *)(param_1 + 0x11))) &&
         (*(byte *)(param_1 + 0x74) - 1 < 0x51)) {
        *(uint *)(param_1 + 0x54) =
             *(int *)(iVar1 + 0xddc) + (uint)*(byte *)(param_1 + 0x11) * 0x2000 + 0x1400;
        *(int *)(param_1 + 0x58) = *(int *)(iVar1 + 0xde0) + 0x1800;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
        sub_080128D4(param_1);
      }
      else {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834b8b4)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080DCEC0(param_1);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834b8b4)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

