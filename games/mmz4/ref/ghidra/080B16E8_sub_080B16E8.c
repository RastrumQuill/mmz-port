// sub_080B16E8 at 0x080B16E8 (thumb)

undefined4 sub_080B16E8(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  sub_0801CC9C();
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 3;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(byte *)(param_1 + 10) = bVar1 | 7;
  sub_08005760(param_1 + 0x74,&DAT_0885ffc8,param_1 + 0x54,0xc);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x80b18a5;
  *(undefined *)(param_1 + 0xb5) = 0;
  *(undefined *)(param_1 + 0xb4) = 0;
  if ((DAT_0202cac0 & 0xf) == 0) {
    *(undefined *)(param_1 + 0xb5) = 1;
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(int *)(param_1 + 0x58) = ((*(int *)(param_1 + 0x58) >> 0xc) * 0x10 + 10) * 0x100;
  sub_080B1DB4(param_1);
  sub_080B1788(param_1);
  return in_lr;
}

