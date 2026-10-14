// sub_0801CB60 at 0x0801CB60 (thumb)

undefined4 sub_0801CB60(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar1 = *(undefined4 *)(param_1 + 0x18c);
  uVar2 = *(undefined4 *)(param_1 + 400);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x188);
  *(undefined4 *)(param_2 + 0x14) = uVar1;
  *(undefined4 *)(param_2 + 0x18) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x198);
  uVar2 = *(undefined4 *)(param_1 + 0x19c);
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x194);
  *(undefined4 *)(param_2 + 0x20) = uVar1;
  *(undefined4 *)(param_2 + 0x24) = uVar2;
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0x1a0);
  return in_lr;
}

