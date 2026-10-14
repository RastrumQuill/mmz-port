// sub_08032A04 at 0x08032A04 (thumb)

void sub_08032A04(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = sub_080329BC();
  if (*(byte *)(param_1 + 0x18a) < 100) {
    iVar2 = sub_080EF150((uint)*(byte *)(param_1 + 0x18a) * 0x380,100);
    iVar2 = 0x700 - iVar2;
  }
  else {
    iVar2 = 0x380;
  }
  uVar1 = sub_08032A44(uVar1,iVar2);
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  return;
}

