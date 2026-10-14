// sub_080DD764 at 0x080DD764 (thumb)

undefined4 sub_080DD764(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(byte *)(iVar2 + 1) < 2) {
    if ((*(byte *)(iVar2 + 1) == 0) || (*(char *)(iVar2 + 2) == '\0')) {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar2 + 0xddc);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar2 + 0xde0);
      if (*(byte *)(param_1 + 0x10) != 0) {
        if (*(byte *)(*(int *)(iVar2 + 0x75b8) + (uint)*(byte *)(param_1 + 0x10) + 0x209) - 1 < 0x51
           ) {
          bVar1 = *(byte *)(param_1 + 10) | 1;
        }
        else {
          bVar1 = *(byte *)(param_1 + 10) & 0xfe;
        }
        *(byte *)(param_1 + 10) = bVar1;
      }
      sub_080128D4(param_1);
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834b8b4)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080DD808(param_1);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834b8b4)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

