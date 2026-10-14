// sub_08030EE8 at 0x08030EE8 (thumb)

ulonglong sub_08030EE8(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  uVar1 = sub_08030E68();
  if ((param_3 == 0) || ((uVar1 & 0xff) != 0)) {
    sub_08036C70(param_1);
  }
  else {
    uVar2 = *(undefined4 *)(param_3 + 8);
    uVar3 = *(undefined4 *)(param_3 + 0xc);
    *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_3 + 4);
    *(undefined4 *)(param_1 + 0x1e8) = uVar2;
    *(undefined4 *)(param_1 + 0x1ec) = uVar3;
    uVar2 = *(undefined4 *)(param_3 + 0x14);
    uVar3 = *(undefined4 *)(param_3 + 0x18);
    *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(param_1 + 500) = uVar2;
    *(undefined4 *)(param_1 + 0x1f8) = uVar3;
  }
  return CONCAT44(in_lr,uVar1) & 0xffffffff000000ff;
}

