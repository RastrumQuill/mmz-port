// sub_080B987C at 0x080B987C (thumb)

undefined4 sub_080B987C(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  uVar1 = (int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 0x10;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    uVar1 = uVar1 | 1;
  }
  sub_080B5F14(param_1 + 0x54,&DAT_08362f20,0,uVar1);
  iVar2 = param_1 + 0x54;
  uVar1 = (int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 0x10;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    uVar1 = uVar1 | 1;
  }
  sub_080B5F14(iVar2,&DAT_08362f3c,0,uVar1);
  sub_080B2484(1,iVar2);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    sub_080B2484(2,iVar2);
  }
  else {
    sub_080B2484(2,iVar2);
  }
  sub_0800471C(0x2a);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

