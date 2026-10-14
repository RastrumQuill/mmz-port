// sub_0801EFC8 at 0x0801EFC8 (thumb)

undefined4 sub_0801EFC8(int param_1,undefined4 param_2,undefined param_3)

{
  undefined4 in_lr;
  
  sub_080EF120(param_1,param_2,param_3,
               *(undefined4 *)(&DAT_08333af0 + (uint)*(byte *)(param_1 + 9) * 4));
  return in_lr;
}

