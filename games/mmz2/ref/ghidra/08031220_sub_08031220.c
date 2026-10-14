// sub_08031220 at 0x08031220 (thumb)

undefined8 sub_08031220(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar1 = *(undefined4 *)(param_1 + 0x214);
  uVar2 = *(undefined4 *)(param_1 + 0x218);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 0x210);
  *(undefined4 *)(param_2 + 0x34) = uVar1;
  *(undefined4 *)(param_2 + 0x38) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x220);
  uVar2 = *(undefined4 *)(param_1 + 0x224);
  *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_1 + 0x21c);
  *(undefined4 *)(param_2 + 0x40) = uVar1;
  *(undefined4 *)(param_2 + 0x44) = uVar2;
  return CONCAT44(param_2 + 0x48,in_lr);
}

