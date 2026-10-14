// sub_080DFE64 at 0x080DFE64 (thumb)

undefined4 sub_080DFE64(int param_1)

{
  undefined4 in_lr;
  
  sub_080EF11C(param_1,&DAT_02031930,
               *(undefined4 *)(&DAT_0835e30c + (uint)*(byte *)(param_1 + 5) * 4));
  return in_lr;
}

