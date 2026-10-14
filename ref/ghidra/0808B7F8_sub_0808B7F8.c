// sub_0808B7F8 at 0x0808B7F8 (thumb)

undefined4 sub_0808B7F8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_0800DEFC(param_1,*(undefined4 *)(param_1 + 0x20));
  sub_080033F0(param_1 + 0x6c,(&DAT_082b3588)[*(byte *)(param_1 + 0x11)]);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (*(byte *)(param_1 + 0x11) < 3) {
    *(undefined *)(param_1 + 0x12) = 3;
    uVar1 = 0xffffff80;
  }
  else {
    *(undefined *)(param_1 + 0x12) = 0xfd;
    uVar1 = 0x80;
  }
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0808B7C0(param_1);
  return in_lr;
}

