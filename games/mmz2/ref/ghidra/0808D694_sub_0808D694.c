// sub_0808D694 at 0x0808D694 (thumb)

undefined8 sub_0808D694(undefined4 param_1,undefined4 param_2,char param_3)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = sub_08006B84(DAT_0202f078);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 0x25) = 0x18;
    *(undefined *)(iVar2 + 9) = 0x43;
    *(undefined4 *)(iVar2 + 0x14) = 0x808d8cd;
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined *)(iVar2 + 0x22) = 0;
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
    *(undefined *)(iVar2 + 0x1d) = *(undefined *)(iVar2 + 0x1c);
    uVar1 = 3;
    if (param_3 != '\0') {
      uVar1 = 2;
    }
    *(undefined *)(iVar2 + 0x10) = uVar1;
    *(undefined4 *)(iVar2 + 0x54) = param_1;
    *(undefined4 *)(iVar2 + 0x58) = param_2;
  }
  return CONCAT44(in_lr,iVar2);
}

