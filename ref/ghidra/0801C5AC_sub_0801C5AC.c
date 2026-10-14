// sub_0801C5AC at 0x0801C5AC (thumb)

void sub_0801C5AC(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x17b);
  if (bVar1 < 4) {
    *(byte *)(param_1 + 0x17b) = bVar1 + 1;
    *(undefined *)(param_1 + 0x17c + (uint)bVar1) = 0;
  }
  return;
}

