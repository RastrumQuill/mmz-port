// sub_0804E060 at 0x0804E060 (thumb)

undefined4 sub_0804E060(int param_1)

{
  undefined uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_080128D4();
  if ((*(byte *)(param_1 + 0xbf) & 1) == 0) {
    uVar2 = ((uint)*(byte *)(param_1 + 0xbf) << 0x18) >> 0x19;
    if (uVar2 == 1) {
      uVar1 = 9;
    }
    else {
      if (uVar2 < 2) {
        if (uVar2 != 0) goto LAB_0804e0e0;
        goto LAB_0804e0dc;
      }
      if (uVar2 == 2) {
        uVar1 = 0xc;
      }
      else {
        if (uVar2 != 3) goto LAB_0804e0e0;
        if (*(byte *)(DAT_0202ebf0 + 1) < 5) goto LAB_0804e0dc;
        uVar1 = 0xf;
      }
    }
  }
  else {
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    if ((uVar2 * 2 >> 0x11 & 1) == 0) {
      uVar1 = 0xd;
    }
    else {
LAB_0804e0dc:
      uVar1 = 8;
    }
  }
  *(undefined *)(param_1 + 0xd) = uVar1;
LAB_0804e0e0:
  iVar3 = *(byte *)(param_1 + 0xbf) + 1;
  *(byte *)(param_1 + 0xbf) = (char)iVar3 + (char)(iVar3 >> 3) * -8;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

