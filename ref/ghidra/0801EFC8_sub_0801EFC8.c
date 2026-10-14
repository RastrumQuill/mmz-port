// sub_0801EFC8 at 0x0801EFC8 (thumb)

undefined4 sub_0801EFC8(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xbe);
  if (bVar1 == 0) {
    bVar1 = sub_08017D70(param_1);
  }
  *(undefined4 *)(param_1 + 0x54) = 0x380;
  *(undefined4 *)(param_1 + 0x58) = 0;
  sub_0808D634(param_1 + 0x4c,*(byte *)(param_1 + 10) >> 4 & 1,0x200);
  *(undefined *)(param_1 + 0x12) = 3;
  if ((bVar1 < 3) || (*(char *)(param_1 + 0x11) == '\0')) {
    *(undefined *)(param_1 + 0xf) = 1;
    if (bVar1 < 3) {
      sub_08018BE8(param_1,3);
    }
    *(undefined *)(param_1 + 0x118) = 0x1c;
    sub_0801F03C(param_1);
  }
  else {
    *(undefined *)(param_1 + 0xf) = 2;
  }
  sub_08001EAC(7);
  return in_lr;
}

