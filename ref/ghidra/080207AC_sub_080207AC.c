// sub_080207AC at 0x080207AC (thumb)

undefined4 sub_080207AC(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_080191B4(param_1 + 0x4c,param_1 + 0xc4,*(undefined4 *)(param_1 + 0x108),
                       *(byte *)(param_1 + 10) >> 4 & 1,0x800,1);
  if ((uVar1 & 0xf) == 0) {
    *(undefined *)(param_1 + 0xf) = 2;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0x40;
    sub_080207F8(param_1);
  }
  return in_lr;
}

