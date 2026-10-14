// sub_08018D64 at 0x08018D64 (thumb)

undefined4 sub_08018D64(undefined4 param_1,int param_2,int param_3)

{
  return *(undefined4 *)
          (((uint)(param_3 << 0x18) >> 0x16) +
          *(int *)(&DAT_082a84c0 + ((uint)(param_2 << 0x18) >> 0x16)));
}

