// sub_08002184 at 0x08002184 (thumb)

undefined4 sub_08002184(int param_1,undefined4 param_2)

{
  undefined4 in_lr;
  
  sub_080C8A9C(param_1,param_2,
               *(undefined4 *)
                (&DAT_08290c1c +
                (((uint)*(byte *)(param_1 + 0x18) << 1 | (uint)*(byte *)(param_1 + 0x19)) & 3) * 4))
  ;
  return in_lr;
}

