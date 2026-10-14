// sub_080979B0 at 0x080979B0 (thumb)

undefined4 sub_080979B0(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined4 in_lr;
  
  sub_08088204();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,1);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x11) & 1;
  if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  bVar1 = 1 < *(byte *)(param_1 + 0x11);
  *(bool *)(param_1 + 0x45) = bVar1;
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x20;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xdf;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(undefined2 *)(param_1 + 0x7c) = 0x40;
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_080977E8(param_1);
  return in_lr;
}

