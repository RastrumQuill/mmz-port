// sub_080E76BC at 0x080E76BC (thumb)

undefined4 sub_080E76BC(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar2 = (uint)*(byte *)(*(int *)(param_1 + 0x28) + 0xdfc + (uint)*(byte *)(param_1 + 0x11));
  if (uVar2 == 0xff) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    uVar3 = (uint)(byte)(&DAT_0836e30c)[uVar2 * 4];
    if ((int)(uVar3 * 0x2000000) < 0) {
      if ((char)(&DAT_0836e30c)[uVar2 * 4] < '\0') {
        uVar1 = 0x5311;
      }
      else {
        uVar1 = 0x5308;
      }
    }
    else if (((*(byte *)(DAT_0203063c + uVar2) & 4) == 0) || ((uVar3 << 0x1a) >> 0x1d != 1)) {
      if ((char)(&DAT_0836e30c)[uVar2 * 4] < '\0') {
        uVar1 = 0x5310;
      }
      else {
        uVar1 = 0x5307;
      }
    }
    else if ((int)(uVar3 * 0x1000000) < 0) {
      uVar1 = 0x5311;
    }
    else {
      uVar1 = 0x5308;
    }
    sub_08017700(param_1,uVar1);
  }
  return in_lr;
}

