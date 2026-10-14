// sub_080DF8C8 at 0x080DF8C8 (thumb)

undefined4 sub_080DF8C8(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  undefined4 in_lr;
  
  sub_0801CFF0();
  sub_08128884(param_1,*(undefined4 *)(&DAT_08865344 + (uint)*(byte *)(param_1 + 0x10) * 4));
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 1;
  cVar2 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar2;
  if (cVar2 == -1) {
    bVar3 = *(char *)(param_1 + 0x12) - 1;
    *(byte *)(param_1 + 0x12) = bVar3;
    *(byte *)(param_1 + 0x13) = bVar3;
    if (bVar3 < 8) {
      *(byte *)(param_1 + 10) = bVar1 & 0xfe;
    }
  }
  uVar4 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
  if ((0x2000 < uVar4) || (*(char *)(param_1 + 0x12) == '\0')) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
    sub_080DF96C(param_1);
  }
  return in_lr;
}

