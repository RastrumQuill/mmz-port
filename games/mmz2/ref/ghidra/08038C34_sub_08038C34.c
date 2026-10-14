// sub_08038C34 at 0x08038C34 (thumb)

undefined4 sub_08038C34(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + param_2;
  puVar1 = (undefined4 *)(param_1 + 0xd8);
  sub_0801F5F4(param_1 + 0x54,param_1 + 0xb4,puVar1,*puVar1,*(undefined4 *)(param_1 + 0xdc),
               *(byte *)(param_1 + 10) >> 4 & 1,param_2,1,1,0,1);
  sub_0801F57C(param_1 + 0x54,param_1 + 0xb4,puVar1,*puVar1,*(undefined4 *)(param_1 + 0xdc),
               *(byte *)(param_1 + 10) >> 4 & 1,1,1,0,1);
  return in_lr;
}

