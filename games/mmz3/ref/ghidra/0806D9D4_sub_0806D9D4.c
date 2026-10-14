// sub_0806D9D4 at 0x0806D9D4 (thumb)

undefined4 sub_0806D9D4(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xbc);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar1 = bVar1 | 0x10;
  }
  sub_080B5F14(param_1 + 0x54,&DAT_08362f20,0,bVar1);
  iVar2 = param_1 + 0x54;
  bVar1 = *(byte *)(param_1 + 0xbc);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar1 = bVar1 | 0x10;
  }
  sub_080B5F14(iVar2,&DAT_08362f20,0,bVar1);
  bVar1 = *(byte *)(param_1 + 0xbc);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar1 = bVar1 | 0x10;
  }
  sub_080B5F14(iVar2,&DAT_08362f3c,0,bVar1);
  bVar1 = *(byte *)(param_1 + 0xbc);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar1 = bVar1 | 0x10;
  }
  sub_080B5F14(iVar2,&DAT_08362f3c,0,bVar1);
  sub_080B2484(1,iVar2);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    sub_080B2484(2,iVar2);
    sub_080B2484(2,iVar2);
  }
  else {
    sub_080B2484(2,iVar2);
    sub_080B2484(2,iVar2);
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  sub_0800471C(0x2a);
  sub_08024FE4(4,iVar2);
  if (DAT_0203016c < 9999) {
    DAT_0203016c = DAT_0203016c + 1;
  }
  sub_080250C4(param_1,iVar2);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

