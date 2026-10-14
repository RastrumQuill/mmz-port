// sub_0804818C at 0x0804818C (thumb)

undefined4 sub_0804818C(int param_1)

{
  byte bVar1;
  undefined uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  sub_080128D4();
  if ((DAT_0202ec42 & 1) == 0) {
    *(undefined *)(param_1 + 0xd) = 6;
    if ((*(char *)(param_1 + 0xbe) == '\0') && (*(char *)(param_1 + 0x11) == '\0')) {
      uVar3 = (uint)*(byte *)(param_1 + 0xbd);
      if (*(byte *)(DAT_0202ebf0 + 1) < 5) {
        bVar1 = sub_080EF1E8(uVar3 + 1,3);
      }
      else {
        bVar1 = (char)(uVar3 + 1) + (char)((int)(uVar3 + 1) >> 2) * -4;
      }
      *(byte *)(param_1 + 0xbd) = bVar1;
    }
    else {
      uVar3 = 2;
    }
    if (uVar3 == 1) {
      *(undefined *)(param_1 + 0xf) = 7;
      uVar2 = 0x14;
    }
    else if (uVar3 < 2) {
      if (uVar3 != 0) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xf) = 0x1c;
      uVar2 = 7;
    }
    else if (uVar3 == 2) {
      *(undefined *)(param_1 + 0xf) = 0x14;
      uVar2 = 0xc;
    }
    else {
      if (uVar3 != 3) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xf) = 0x23;
      uVar2 = 0x1b;
    }
    *(undefined *)(param_1 + 0xd1) = uVar2;
  }
  return in_lr;
}

