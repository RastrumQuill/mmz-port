// sub_0808FBFC at 0x0808FBFC (thumb)

undefined4 sub_0808FBFC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08365d80 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_08090CD8(param_1);
    iVar1 = sub_08063614(param_1);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0xc0) != 0) {
        iVar1 = sub_08025794();
        if (iVar1 == 0) {
          return in_lr;
        }
        *(int *)(param_1 + 0xc0) = 0;
      }
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08365da8 + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0808FC80(param_1);
  }
  return in_lr;
}

