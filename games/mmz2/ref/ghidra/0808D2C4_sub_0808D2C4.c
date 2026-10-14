// sub_0808D2C4 at 0x0808D2C4 (thumb)

undefined4 sub_0808D2C4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar1 + 0x58);
  if ((DAT_0202ebbb & 0x20) == 0) {
    if ((*(char *)(iVar1 + 0xd) != '\x02') && (*(char *)(param_1 + 0x11) == '\0')) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
    if (*(char *)(iVar1 + 0xd) == '\x03') {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x11) != '\x01') {
      return in_lr;
    }
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  return in_lr;
}

