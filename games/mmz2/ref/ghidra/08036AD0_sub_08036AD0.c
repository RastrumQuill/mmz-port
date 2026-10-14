// sub_08036AD0 at 0x08036AD0 (thumb)

undefined8 sub_08036AD0(int param_1,int param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = param_2 + 0x40U & 0xff;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar1 = 0x100 - uVar1 & 0xff;
  }
  uVar1 = uVar1 + 0x10 & 0xff;
  if (uVar1 < 0xa0) {
    uVar1 = (uint)(byte)(&DAT_08335c84)[uVar1 >> 5];
  }
  else {
    uVar1 = 0xffffffff;
  }
  return CONCAT44(in_lr,uVar1);
}

