// sub_08031208 at 0x08031208 (thumb)

undefined8 sub_08031208(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar1 = *(undefined4 *)(param_1 + 0x200);
  uVar2 = *(undefined4 *)(param_1 + 0x204);
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x1fc);
  *(undefined4 *)(param_2 + 0x20) = uVar1;
  *(undefined4 *)(param_2 + 0x24) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x20c);
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0x208);
  *(undefined4 *)(param_2 + 0x2c) = uVar1;
  return CONCAT44(param_2 + 0x30,in_lr);
}

