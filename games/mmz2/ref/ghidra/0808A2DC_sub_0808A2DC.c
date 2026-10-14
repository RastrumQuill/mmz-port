// sub_0808A2DC at 0x0808A2DC (thumb)

undefined4 sub_0808A2DC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0x13) = 0;
    if (*(char *)(param_1 + 0x11) == '\x05') {
      *(undefined *)(param_1 + 0xd) = 6;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 3;
    }
    sub_08012580(param_1);
    sub_080127E4(param_1,0x7404);
    iVar1 = sub_08006B50(DAT_0202f078);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 0x25) = 0x18;
      *(undefined *)(iVar1 + 9) = 0x41;
      *(undefined4 *)(iVar1 + 0x14) = 0x80895b5;
      *(undefined2 *)(iVar1 + 0x20) = 0;
      *(undefined *)(iVar1 + 0x22) = 0;
      *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
      *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
      *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
      *(int *)(iVar1 + 0x58) = *(int *)(param_1 + 0x58) + 0x1000;
      *(undefined *)(iVar1 + 0x10) = 4;
      *(int *)(iVar1 + 0x28) = param_1;
    }
    *(int *)(param_1 + 0x2c) = iVar1;
  }
  return in_lr;
}

