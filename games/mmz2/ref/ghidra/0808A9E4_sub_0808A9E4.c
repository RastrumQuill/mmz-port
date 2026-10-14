// sub_0808A9E4 at 0x0808A9E4 (thumb)

undefined4 sub_0808A9E4(int param_1)

{
  undefined uVar1;
  undefined4 in_lr;
  
  if (0x1f < *(byte *)(param_1 + 0x12)) {
    *(undefined *)(param_1 + 0x12) = 0;
    if (*(char *)(param_1 + 0x11) == '\x05') {
      uVar1 = 7;
    }
    else {
      uVar1 = 4;
    }
    *(undefined *)(param_1 + 0xd) = uVar1;
    sub_080127E4(param_1,0x7404);
  }
  return in_lr;
}

