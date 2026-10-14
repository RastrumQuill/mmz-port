// sub_0808647C at 0x0808647C (thumb)

undefined4 sub_0808647C(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  
  puVar3 = (ushort *)(param_1 + 0xc0);
  if (*puVar3 == 0) {
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58) + -0x800;
    sub_0800471C(0x2a);
    sub_080B2484(1,&local_1c);
    if (*(char *)(param_1 + 0xbd) == '\0') {
      sub_08007390(param_1 + 0x74,&DAT_08364df8);
    }
    else {
      sub_08007390(param_1 + 0x74,&DAT_08364e28);
    }
LAB_0808652c:
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08086594(param_1);
  }
  else {
    if (*(char *)(param_1 + 0xd) != '\a') {
      if ((*(uint *)(param_1 + 0x8c) & 0x20001) == 0x20001) {
        *(undefined *)(param_1 + 0xd) = 7;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      if (*(char *)(param_1 + 0xd) != '\a') {
        if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
          sub_080FE2C0(param_1,*(undefined4 *)(&UNK_08364d90 + (uint)*(byte *)(param_1 + 0xd) * 4));
          uVar1 = *puVar3;
          uVar2 = uVar1 - 1;
          *puVar3 = uVar2;
          if (0x3b < (ushort)(uVar1 - 1)) {
            return in_lr;
          }
          if ((uVar2 & 3) < 2) {
            sub_08017BF8(param_1);
            return in_lr;
          }
          sub_08017B2C(param_1);
          return in_lr;
        }
        local_14 = *(undefined4 *)(param_1 + 0x54);
        local_10 = *(int *)(param_1 + 0x58) + -0x800;
        sub_0800471C(0x2a);
        sub_080B2484(1,&local_14);
        goto LAB_0808652c;
      }
    }
    sub_08086AAC(param_1);
  }
  return in_lr;
}

