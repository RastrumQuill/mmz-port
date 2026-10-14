// sub_080BFB68 at 0x080BFB68 (thumb)

undefined4 sub_080BFB68(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  undefined4 in_lr;
  
  sub_080177F4();
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836b8fc + (uint)*(byte *)(param_1 + 0x10) * 4));
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
  uVar4 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
  if ((0x2000 < uVar4) || (*(char *)(param_1 + 0x12) == '\0')) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
    sub_080BFC0C(param_1);
  }
  return in_lr;
}

