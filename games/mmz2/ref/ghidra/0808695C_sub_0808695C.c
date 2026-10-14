// sub_0808695C at 0x0808695C (thumb)

undefined4 sub_0808695C(int param_1)

{
  undefined uVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x10) == '\0') && (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc))) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    uVar1 = 1;
  }
  else {
    if ((*(char *)(param_1 + 0x10) != '\x01') || (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2)) {
      sub_080EF118(param_1,*(undefined4 *)(&DAT_0834154c + (uint)*(byte *)(param_1 + 0xd) * 4));
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    uVar1 = 0;
  }
  *(undefined *)(param_1 + 0xd) = uVar1;
  sub_080869D0(param_1);
  return in_lr;
}

