// sub_080F703C at 0x080F703C (thumb)

undefined4 sub_080F703C(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (1 < *(byte *)(param_1 + 3)) {
    uVar2 = 0;
    do {
      uVar1 = (uint)*(byte *)(param_1 + 0xdfc + uVar2);
      if (uVar1 != 0xff) {
        sub_080E9604(&DAT_0836f268 + (ushort)(&DAT_0836e9d8)[uVar1 + 100],2,uVar2 * 2 + 2);
      }
      uVar2 = uVar2 + 1 & 0xffff;
    } while (uVar2 < 6);
    if (*(char *)(param_1 + 0xdfc) == -1) {
      sub_080E9604(&DAT_0836fc6d,2,2);
    }
  }
  return in_lr;
}

