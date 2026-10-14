// sub_080AD1F4 at 0x080AD1F4 (thumb)

undefined4 sub_080AD1F4(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 2;
  uVar1 = 0;
  do {
    sub_080AD17C(param_1,uVar1 & 0xff);
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 4);
  sub_080AD2BC(param_1);
  return in_lr;
}

