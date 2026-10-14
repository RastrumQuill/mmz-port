// sub_08000C64 at 0x08000C64 (thumb)

void sub_08000C64(void)

{
  int unaff_r6;
  
  (**(code **)(&DAT_08000c78 + (uint)*(byte *)(unaff_r6 + 2) * 4))();
  return;
}

