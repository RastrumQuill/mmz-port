// sub_0808631C at 0x0808631C (thumb)

undefined4 sub_0808631C(undefined4 param_1,undefined param_2,uint param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_020305e8);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x18;
    *(undefined *)(iVar1 + 9) = 0x2d;
    *(undefined4 *)(iVar1 + 0x14) = 0x80863b9;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
    *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
    *(undefined4 *)(iVar1 + 0x28) = param_1;
    if ((param_3 & 0xff) == 0) {
      *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xef;
    }
    else {
      *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) | 0x10;
    }
    *(char *)(iVar1 + 0x4c) = (char)(param_3 & 1);
    *(byte *)(iVar1 + 0x4a) = *(byte *)(iVar1 + 0x4a) & 0xef | (byte)((param_3 & 1) << 4);
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(undefined *)(iVar1 + 0x11) = 0;
  }
  return in_lr;
}

