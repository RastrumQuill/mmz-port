// sub_0810513C at 0x0810513C (thumb)

ulonglong sub_0810513C(int param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_081051A0(param_1,param_2,*(byte *)(param_1 + 0xb) >> 2 & 1);
  return CONCAT44(in_lr,uVar1) & 0xffffffff0000ffff;
}

