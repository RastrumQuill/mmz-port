// sub_0804D098 at 0x0804D098 (thumb)

undefined8 sub_0804D098(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar1 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  uVar2 = uVar1 & 0xffff;
  if (((uVar1 & 0xf) == 0xf) || ((uVar1 & 0x8000) != 0)) {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}

