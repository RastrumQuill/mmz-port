// sub_0808B050 at 0x0808B050 (thumb)

void sub_0808B050(int param_1,byte param_2)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)(param_1 + 0xb5);
  bVar1 = *pbVar2;
  *pbVar2 = bVar1 + 1;
  if (param_2 <= (byte)(bVar1 + 1)) {
    *pbVar2 = 0;
    sub_08002B10(0x137);
  }
  return;
}

