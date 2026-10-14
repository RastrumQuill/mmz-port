// sub_08036C80 at 0x08036C80 (thumb)

ulonglong sub_08036C80(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = param_3;
  if ((param_2 & 0x8000) != 0) {
    uVar1 = param_3 & 0xffffffef | param_4 & 0x10;
    if (*(char *)(param_1 + 0x1f5) == '\x01') {
      uVar1 = param_3 & 0xffffff6f | param_4 & 0x10 | param_4 & 0x80;
    }
  }
  return CONCAT44(in_lr,uVar1) & 0xffffffff000000ff;
}

