// sub_0803D3D4 at 0x0803D3D4 (thumb)

undefined4 sub_0803D3D4(int param_1,undefined4 param_2,short param_3)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_0800736C(param_1 + 0x74,param_2,param_1 + 0x54,(int)param_3);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  return in_lr;
}

