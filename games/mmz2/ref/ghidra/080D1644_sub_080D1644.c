// sub_080D1644 at 0x080D1644 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_080D1644(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  
  if ((DAT_020011d0 & 0x7f) == 10) {
    if (*(char *)(param_1 + 0x10) == '\0') {
      local_1c = *(undefined4 *)(param_1 + 0x54);
      iVar1 = sub_080EF1E8((uint)_DAT_0202e020 - (*(byte *)(param_1 + 0x11) - 0x60),0x60);
      local_18 = *(int *)(param_1 + 0x58) - (iVar1 * 0x100 + -0x1000);
      if (DAT_0202ed54 + -0x5000 < local_18) {
        do {
          sub_080CDD64(param_1,&local_1c,0);
          local_18 = local_18 + -0x6000;
        } while (DAT_0202ed54 + -0x5000 < local_18);
      }
    }
    else {
      local_14 = *(undefined4 *)(param_1 + 0x54);
      iVar1 = sub_080EF1E8((uint)_DAT_0202e020 + (uint)*(byte *)(param_1 + 0x11),0x60);
      local_10 = *(int *)(param_1 + 0x58) + iVar1 * 0x100 + -0x1000;
      if (local_10 < DAT_0202ed54 + 0x4fff) {
        do {
          sub_080CDD64(param_1,&local_14,1);
          local_10 = local_10 + 0x6000;
        } while (local_10 < DAT_0202ed54 + 0x4fff);
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  }
  else {
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    sub_080D1764(param_1);
  }
  return in_lr;
}

