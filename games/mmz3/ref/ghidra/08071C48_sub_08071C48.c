// sub_08071C48 at 0x08071C48 (thumb)

undefined4 sub_08071C48(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (iVar1 = sub_080730F8(param_1), iVar1 != 0)) {
    iVar1 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0xb4);
    if (iVar1 < 1) {
      iVar1 = *(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0x54);
    }
    if ((0x9400 < iVar1) && (*(char *)(param_1 + 0xd) != '\x03')) {
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08363398 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_08072F54(param_1);
    if (((*(char *)(param_1 + 0xd) == '\x04') || (*(char *)(param_1 + 0xd) == '\x06')) ||
       (iVar1 = sub_08063614(param_1), iVar1 == 0)) {
      if (*(int *)(param_1 + 0x58) + -0x1e00 < DAT_0202e48c) {
        if (*(char *)(param_1 + 0xb8) == '\0') {
          sub_08017700(param_1,0x2700);
          sub_080177F4(param_1);
          *(undefined4 *)(param_1 + 0x60) = 0;
        }
        *(char *)(param_1 + 0xb8) = '\x01';
        iVar1 = *(int *)(param_1 + 0x60) + 0x20;
        *(int *)(param_1 + 0x60) = iVar1;
        if (0x700 < iVar1) {
          *(undefined4 *)(param_1 + 0x60) = 0x700;
        }
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      }
      else {
        if (*(char *)(param_1 + 0xb8) == '\x01') {
          *(undefined *)(param_1 + 0xd) = 0;
          *(undefined *)(param_1 + 0xe) = 0;
        }
        *(char *)(param_1 + 0xb8) = '\0';
        sub_080FE2C0(param_1,*(undefined4 *)(&DAT_083633b8 + (uint)*(byte *)(param_1 + 0xd) * 4));
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08071D6C(param_1);
  }
  return in_lr;
}

