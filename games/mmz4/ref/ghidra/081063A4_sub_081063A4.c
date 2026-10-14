// sub_081063A4 at 0x081063A4 (thumb)

undefined4 sub_081063A4(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if ((1 < bVar1) || (bVar1 != 0)) goto LAB_08106442;
    iVar2 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar2 + -0x1000;
    *(int *)(param_1 + 0x68) = iVar2 + -0x1000;
    DAT_0202e058 = 0x300;
    DAT_0202de58 = 5;
    sub_08001D30(&DAT_08c440f0,0x10000);
    sub_08002208(&DAT_08c440fc,(DAT_0202de58 - 8) * 0x20 + 0x200);
    sub_0801CF00(param_1,0xc00);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_0801CFF0(param_1);
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
    iVar2 = 0;
    do {
      iVar3 = sub_081050D8(param_1,9);
      *(char *)(iVar3 + 0x11) = (char)iVar2;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 5);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
LAB_08106442:
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x68) + ((short)(&DAT_08128c10)[*(byte *)(param_1 + 0x12)] * 0x2ff >> 8);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  return in_lr;
}

