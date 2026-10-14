// sub_0806FFF4 at 0x0806FFF4 (thumb)

undefined4 sub_0806FFF4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    sub_08070FA4(param_1);
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_083631cc + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_08070E00(param_1);
    if (((*(char *)(param_1 + 0xd) == '\x05') || (*(char *)(param_1 + 0xd) == '\a')) ||
       (iVar1 = sub_08063614(param_1), iVar1 == 0)) {
      if (*(int *)(param_1 + 0x58) + 0x800 < DAT_0202e48c) {
        if (*(char *)(param_1 + 0xbd) == '\0') {
          sub_08017700(param_1,0x1800);
          sub_080177F4(param_1);
          *(undefined4 *)(param_1 + 0x60) = 0;
        }
        *(char *)(param_1 + 0xbd) = '\x01';
        iVar1 = *(int *)(param_1 + 0x60) + 0x20;
        *(int *)(param_1 + 0x60) = iVar1;
        if (0x700 < iVar1) {
          *(undefined4 *)(param_1 + 0x60) = 0x700;
        }
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      }
      else {
        if (*(char *)(param_1 + 0xbd) == '\x01') {
          *(undefined *)(param_1 + 0xd) = 1;
          *(undefined *)(param_1 + 0xe) = 0;
        }
        *(char *)(param_1 + 0xbd) = '\0';
        sub_080FE2C0(param_1,*(undefined4 *)(&DAT_083631ec + (uint)*(byte *)(param_1 + 0xd) * 4));
      }
    }
    else {
      *(undefined *)(param_1 + 0xbe) = *(undefined *)(param_1 + 0xd);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080700EC(param_1);
  }
  return in_lr;
}

