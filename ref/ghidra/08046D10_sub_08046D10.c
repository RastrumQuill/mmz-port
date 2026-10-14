// sub_08046D10 at 0x08046D10 (thumb)

undefined4 sub_08046D10(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  sub_08029654();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08029778(param_1,4);
  sub_080297C0(param_1);
  *(undefined *)(param_1 + 0x44) = *(undefined *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0x11) == '\0') {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x54) = 0x80;
    uVar2 = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 0x54) = 0xffffff80;
    uVar2 = 2;
  }
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_08046B38(param_1);
  return in_lr;
}

