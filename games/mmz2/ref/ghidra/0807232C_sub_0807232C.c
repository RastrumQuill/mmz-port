// sub_0807232C at 0x0807232C (thumb)

undefined4 sub_0807232C(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x14) & 1) != 0) &&
     ((*(uint *)(*(int *)(param_1 + 0x2c) + 0x8c) & 1) != 0)) {
    uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar1 & 0x7fffffff;
    uVar2 = uVar1 * 2 >> 0x11;
    uVar1 = uVar2 & 1;
    sub_080B0ACC(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 0x54,&DAT_08343a04 + (uVar2 & 3) * 0x1c,
                 0,uVar1 << 4 | uVar1);
  }
  return in_lr;
}

