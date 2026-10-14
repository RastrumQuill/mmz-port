// sub_08036E0C at 0x08036E0C (thumb)

undefined4 sub_08036E0C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xe) != '\x03') && ((*(ushort *)(param_1 + 0x90) & 1) != 0)) {
    *(undefined2 *)(param_1 + 0xe) = 3;
  }
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082ad8f0 + (uint)*(byte *)(param_1 + 0xe) * 4));
  iVar1 = *(byte *)(param_1 + 0x13) - 1;
  *(char *)(param_1 + 0x13) = (char)iVar1;
  if (iVar1 == 0) {
    sub_0808D6F4(param_1 + 0x4c,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined *)(param_1 + 0x13) = 3;
  }
  return in_lr;
}

