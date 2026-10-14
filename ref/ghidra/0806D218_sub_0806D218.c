// sub_0806D218 at 0x0806D218 (thumb)

undefined4 sub_0806D218(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x10);
  sub_080489E4();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,cVar1 + '\x03');
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  bVar2 = *(byte *)(*(int *)(param_1 + 0x20) + 10) >> 4;
  *(byte *)(param_1 + 0x44) = bVar2 & 1;
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(undefined *)(param_1 + 0x12) = 0x40;
  uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
  iVar4 = (uVar3 * 2 >> 0x11 & 0x7f) + 0x100;
  *(int *)(param_1 + 0x54) = iVar4;
  uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
  *(uint *)(param_1 + 0x58) = ((uVar3 * 2 >> 0x11 & 0xf) + 6) * -0x40;
  uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar3 & 0x7fffffff;
  if ((uVar3 * 2 >> 0x11 & 1) != 0) {
    *(int *)(param_1 + 0x54) = -iVar4;
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 1;
  sub_0806CE88(param_1);
  return in_lr;
}

