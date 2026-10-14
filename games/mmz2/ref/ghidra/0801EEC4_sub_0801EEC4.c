// sub_0801EEC4 at 0x0801EEC4 (thumb)

ulonglong sub_0801EEC4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_080EF11C(param_1,param_2,
                       *(undefined4 *)(&DAT_08333adc + (uint)*(byte *)(param_1 + 9) * 4));
  return CONCAT44(in_lr,uVar1) & 0xffffffff0000ffff;
}

