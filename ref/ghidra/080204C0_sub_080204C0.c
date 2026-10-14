// sub_080204C0 at 0x080204C0 (thumb)

undefined4 sub_080204C0(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_080191B4(param_1 + 0x4c,param_1 + 0xc4,*(undefined4 *)(param_1 + 0x108),
                       *(byte *)(param_1 + 10) >> 4 & 1,1,1);
  if ((uVar1 & 0xf) != 0) {
    *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 1;
    sub_08020448(param_1);
  }
  return in_lr;
}

