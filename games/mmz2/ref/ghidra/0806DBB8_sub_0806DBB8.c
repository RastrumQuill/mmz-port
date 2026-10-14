// sub_0806DBB8 at 0x0806DBB8 (thumb)

undefined8 sub_0806DBB8(int param_1,short param_2,int param_3,int param_4)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  pbVar1 = (byte *)(param_1 + 0xb5);
  if ((*pbVar1 & 2) == 0) {
    *pbVar1 = *pbVar1 | 2;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + param_3;
  param_4 = *(int *)(param_1 + 0x58) + param_4;
  *(int *)(param_1 + 0x58) = param_4;
  if (param_2 == 0) {
    *(int *)(param_1 + 0xb8) = param_4;
    *(undefined2 *)(param_1 + 0xbe) = 0;
    *pbVar1 = *pbVar1 & 5;
  }
  return CONCAT44(in_lr,(uint)(param_2 != 0));
}

