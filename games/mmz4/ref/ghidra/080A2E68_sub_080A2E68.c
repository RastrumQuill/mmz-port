// sub_080A2E68 at 0x080A2E68 (thumb)

undefined4 sub_080A2E68(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  uVar2 = *(byte *)(param_1 + 10) >> 4 & 1;
  local_14 = *(undefined4 *)(param_1 + 0x54);
  local_10 = *(undefined4 *)(param_1 + 0x58);
  uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar1 & 0x7fffffff;
  uVar1 = (uVar1 * 2 >> 0x11 & 1) + 1;
  do {
    sub_080D4898(&local_14,&UNK_0885e878 + (uVar1 & 1) * 0x1c,0,uVar2 | uVar2 << 4);
    uVar1 = uVar1 - 1;
  } while (-1 < (int)uVar1);
  return in_lr;
}

