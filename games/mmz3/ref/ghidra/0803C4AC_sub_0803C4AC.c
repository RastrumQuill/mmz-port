// sub_0803C4AC at 0x0803C4AC (thumb)

undefined4 sub_0803C4AC(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  sub_0801749C();
  sub_080176EC(param_1);
  sub_080176EC(param_1);
  bVar4 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar4 | 3;
  bVar1 = *(byte *)(iVar5 + 10) >> 4;
  uVar3 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar4 = bVar4 & 0xef | 3;
  }
  else {
    bVar4 = bVar4 | 0x13;
  }
  *(byte *)(param_1 + 10) = bVar4;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar2 = 0x600;
  }
  else {
    uVar2 = 0xfffffa00;
  }
  *(undefined4 *)(param_1 + 100) = uVar2;
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_08017700(param_1,0x8d00);
    *(undefined *)(param_1 + 0x12) = 0;
  }
  else {
    sub_08017700(param_1,0x8d01);
    uVar2 = *(undefined4 *)(iVar5 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar5 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x98) = 0x803c681;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 4);
  sub_0803C570(param_1);
  return in_lr;
}

