// sub_08075A80 at 0x08075A80 (thumb)

undefined4 sub_08075A80(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  sub_080128D4();
  if (((*(uint *)(param_1 + 0x8c) & 4) != 0) && ((*(uint *)(param_1 + 0x90) & 4) == 0)) {
    sub_080032EC(0xe1);
  }
  bVar2 = *(char *)(param_1 + 0x13) + 1;
  *(byte *)(param_1 + 0x13) = bVar2;
  iVar4 = *(int *)(param_1 + 0x5c);
  iVar3 = iVar4 * (short)(&DAT_080ef450)[bVar2 + 0x40 & 0xff];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar3 >> 8);
  iVar3 = iVar4 * (short)(&DAT_080ef450)[bVar2];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar3 >> 8);
  *(int *)(param_1 + 0x5c) = iVar4 + 0x10;
  cVar1 = *(char *)(param_1 + 0x12);
  *(char *)(param_1 + 0x12) = cVar1 + -1;
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

