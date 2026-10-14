// sub_0802304C at 0x0802304C (thumb)

ulonglong sub_0802304C(undefined4 param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_0802306C(param_1,1);
  if ((uVar1 & 0xffff) != 0) {
    sub_0801E6AC(0x22);
  }
  return CONCAT44(in_lr,uVar1) & 0xffffffff000000ff;
}

