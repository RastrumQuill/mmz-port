// sub_080D0384 at 0x080D0384 (thumb)

ulonglong sub_080D0384(int param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_080D03E8(param_1,param_2,*(byte *)(param_1 + 0xb) >> 2 & 1);
  return CONCAT44(in_lr,uVar1) & 0xffffffff0000ffff;
}

