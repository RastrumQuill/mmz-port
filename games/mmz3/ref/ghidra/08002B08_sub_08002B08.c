// sub_08002B08 at 0x08002B08 (thumb)

void sub_08002B08(void)

{
  ushort uVar1;
  
  uVar1 = Ram04000128;
  Ram04000128 = uVar1 | 0x80;
  return;
}

