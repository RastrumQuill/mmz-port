// sub_0802DD78 at 0x0802DD78 (thumb)

undefined4 sub_0802DD78(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    if ((iVar1 + -0xd00) - *(int *)(param_1 + 0x50) < 0x41) {
      local_10 = sub_08008360(*(undefined4 *)(param_1 + 0x4c));
      *(int *)(param_1 + 0x50) = local_10 + -0xd00;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      *(undefined *)(param_1 + 0x12) = 0x80;
      local_14 = *(int *)(param_1 + 0x4c) + 0x2000;
      local_10 = local_10 + 0x300;
      sub_0808D634(&local_14,0,0x200);
      sub_0808D698(&local_14,0,0);
      sub_0808D698(&local_14,0,0);
      sub_0808D698(&local_14,0,0);
      sub_0808D698(&local_14,1,2);
      sub_0808D698(&local_14,1,2);
      sub_0808D698(&local_14,1,2);
      sub_0808D698(&local_14,0,1);
      sub_0808D698(&local_14,0,1);
      sub_0808D698(&local_14,0,1);
      sub_0808D698(&local_14,1,3);
      sub_0808D698(&local_14,1,3);
      sub_0808D698(&local_14,1,3);
      local_14 = *(int *)(param_1 + 0x4c) + -0x2000;
      sub_0808D634(&local_14,1,0x200);
      sub_0808D698(&local_14,1,0);
      sub_0808D698(&local_14,1,0);
      sub_0808D698(&local_14,1,0);
      sub_0808D698(&local_14,0,2);
      sub_0808D698(&local_14,0,2);
      sub_0808D698(&local_14,0,2);
      sub_0808D698(&local_14,1,1);
      sub_0808D698(&local_14,1,1);
      sub_0808D698(&local_14,1,1);
      sub_0808D698(&local_14,0,3);
      sub_0808D698(&local_14,0,3);
      sub_0808D698(&local_14,0,3);
      sub_08001EAC(0xad);
      sub_0801412C(0x10,param_1 + 0x4c);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x58) + 0x40;
      *(int *)(param_1 + 0x58) = iVar1;
      if (0x700 < iVar1) {
        *(undefined4 *)(param_1 + 0x58) = 0x700;
      }
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    }
  }
  else if ((DAT_02022b6e & 1) == 0) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined4 *)(param_1 + 0x54) = 0xffffff40;
    DAT_02022ae0 = DAT_02022ae0 | 0x40;
  }
  return in_lr;
}

