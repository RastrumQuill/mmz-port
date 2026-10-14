// sub_08033DFC at 0x08033DFC (thumb)

ulonglong sub_08033DFC(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_080EF11C(param_1,param_2,
                       *(undefined4 *)(&DAT_083345e0 + (uint)*(byte *)(param_1 + 0xe) * 4));
  return CONCAT44(in_lr,uVar1) & 0xffffffff000000ff;
}

