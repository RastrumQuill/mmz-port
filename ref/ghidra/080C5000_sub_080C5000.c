// sub_080C5000 at 0x080C5000 (thumb)

void sub_080C5000(int param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = *(byte *)(param_1 + 0x9e8) - 1;
  bVar1 = (byte)iVar2;
  *(byte *)(param_1 + 0x9e8) = bVar1;
  if (iVar2 == 0) {
    *(byte *)(param_1 + 3) = bVar1;
    *(undefined2 *)(param_1 + 4) = 0;
  }
  return;
}

