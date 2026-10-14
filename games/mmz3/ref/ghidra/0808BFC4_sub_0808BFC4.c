// sub_0808BFC4 at 0x0808BFC4 (thumb)

undefined8 sub_0808BFC4(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    uVar2 = 0;
    goto LAB_0808c022;
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\0') {
LAB_0808c014:
    *(char *)(param_1 + 0xd) = cVar1;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x8c);
    if ((uVar3 & 0x10000) == 0) {
      if ((uVar3 & 0x20000) == 0) {
        cVar1 = '\x01';
      }
      else {
        cVar1 = '\x03';
      }
      goto LAB_0808c014;
    }
    *(undefined *)(param_1 + 0xd) = 2;
  }
  sub_0808C2D0(param_1);
  uVar2 = 1;
LAB_0808c022:
  return CONCAT44(in_lr,uVar2);
}

