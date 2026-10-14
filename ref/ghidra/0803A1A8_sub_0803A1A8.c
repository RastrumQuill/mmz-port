// sub_0803A1A8 at 0x0803A1A8 (thumb)

undefined4 sub_0803A1A8(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  undefined4 in_lr;
  byte abStack_10 [4];
  
  sub_080C8D70(abStack_10,&DAT_080c9290,4);
  puVar2 = (ushort *)(param_1 + 0xc0);
  uVar1 = *puVar2;
  *puVar2 = uVar1 - 1;
  if ((ushort)(uVar1 - 1) == 0xffff) {
    sub_08029778(param_1,3);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    *puVar2 = (ushort)abStack_10[*(byte *)(param_1 + 0x11)];
    *(undefined2 *)(param_1 + 0xc2) = 0;
  }
  sub_080297C0(param_1);
  return in_lr;
}

