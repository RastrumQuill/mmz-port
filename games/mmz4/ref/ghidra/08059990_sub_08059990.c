// sub_08059990 at 0x08059990 (thumb)

undefined sub_08059990(int param_1)

{
  undefined4 local_8 [2];
  
  local_8[0] = 0xb0;
  local_8[1] = 0xffffffd0;
  return *(undefined *)(local_8 + (*(byte *)(param_1 + 10) >> 4 & 1));
}

