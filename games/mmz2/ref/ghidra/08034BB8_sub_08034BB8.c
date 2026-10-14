// sub_08034BB8 at 0x08034BB8 (thumb)

ulonglong sub_08034BB8(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 local_20 [4];
  
  local_20[0] = 0x8034be5;
  local_20[1] = 0x8034bfd;
  local_20[2] = 0x8034c35;
  local_20[3] = 0x8034c71;
  uVar1 = sub_080EF118(param_1,local_20[param_2]);
  return CONCAT44(in_lr,uVar1) & 0xffffffff000000ff;
}

