// sub_08019460 at 0x08019460 (thumb)

undefined4 sub_08019460(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 in_lr;
  undefined4 local_28 [2];
  
  uVar1 = *(uint *)(param_1 + 0x5c);
  if (DAT_0202cab2 != 0) {
    sub_081284E4(&DAT_08b5d5c0,((ushort)(&DAT_02000a04)[uVar1 >> 4] & 0x1f00) * 8 + 0x6000000,0x200)
    ;
    local_28[0] = 0;
    sub_081284E4(local_28,&DAT_06000800 +
                          ((ushort)(&DAT_02000a04)[(uVar1 << 0x10) >> 0x14] & 0x1f00) * 8,0x1000200)
    ;
  }
  if (DAT_0202dad4 != '\b') {
    sub_08007638(param_1,param_2);
  }
  return in_lr;
}

