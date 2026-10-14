// sub_08099AAC at 0x08099AAC (thumb)

undefined4 sub_08099AAC(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined *)(param_1 + 0x13) = (&DAT_082b4ffc)[(uint)*(byte *)(param_1 + 0x10) * 3];
  sub_08099ACC();
  return in_lr;
}

