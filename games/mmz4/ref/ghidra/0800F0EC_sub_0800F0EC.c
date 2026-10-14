// sub_0800F0EC at 0x0800F0EC (thumb)

undefined4 sub_0800F0EC(int param_1,undefined4 param_2)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x44) == 0x100) {
    *(uint *)(param_1 + 0x4c) = (uint)(*(ushort *)(param_1 + 0x6c) >> 4);
    *(int *)(param_1 + 0x50) =
         (int)((uint)*(ushort *)
                      ((int)&DAT_08128c10 + ((*(byte *)(param_1 + 0x10) + 0x40) * 0x1000000 >> 0x17)
                      ) << 0x10) >> 0x16;
  }
  sub_08007638(param_1,param_2);
  return in_lr;
}

