// sub_080C173A at 0x080C173A (thumb)

undefined8
sub_080C173A(undefined4 param_1,undefined4 param_2,undefined2 param_3,int param_4,undefined4 param_5
            ,undefined4 param_6)

{
  undefined4 *unaff_r4;
  
  *(undefined2 *)(param_4 + 0x20) = param_3;
  *(undefined *)(param_4 + 0x22) = 0;
  *(undefined *)(param_4 + 0x10) = 4;
  *(undefined4 *)(param_4 + 0x54) = *unaff_r4;
  *(undefined4 *)(param_4 + 0x58) = unaff_r4[1];
  return CONCAT44(param_6,param_4);
}

