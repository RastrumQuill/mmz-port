// sub_0804D538 at 0x0804D538 (thumb)

undefined4 sub_0804D538(int param_1)

{
  undefined uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  sub_080128D4();
  uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar2 & 0x7fffffff;
  if ((uVar2 * 2 >> 0x11 & 1) == 0) {
    uVar1 = 6;
  }
  else {
    uVar1 = 5;
  }
  *(undefined *)(param_1 + 0xd) = uVar1;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

