// sub_08035798 at 0x08035798 (thumb)

undefined4 sub_08035798(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  sub_08029654();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08029778(param_1,0xd);
  sub_080297C0(param_1);
  *(char *)(param_1 + 0x44) = *(char *)(param_1 + 200);
  if (*(char *)(param_1 + 200) == '\0') {
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
  sub_080355C8(param_1);
  return in_lr;
}

