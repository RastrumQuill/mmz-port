// sub_08089EA0 at 0x08089EA0 (thumb)

undefined4 sub_08089EA0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    iVar1 = sub_0807F824(param_1);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0xbc) == 0)) {
      *(undefined *)(param_1 + 0xd) = *(undefined *)(param_1 + 0xc0);
      *(undefined *)(param_1 + 0xe) = 0;
    }
    sub_08128884(param_1,*(undefined4 *)(&DAT_0885bdf8 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_0808AF78(param_1);
    sub_08128884(param_1,*(undefined4 *)(&DAT_0885be34 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    uVar2 = 2;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    if ((*(char *)(param_1 + 0xc3) == '\0') &&
       (uVar2 = *(uint *)(param_1 + 0x8c) & 0x10000, uVar2 != 0)) {
      *(undefined *)(param_1 + 0xd) = 1;
    }
    else {
      *(char *)(param_1 + 0xd) = (char)uVar2;
    }
    sub_08089F44(param_1);
  }
  return in_lr;
}

