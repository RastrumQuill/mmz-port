// sub_080BDD10 at 0x080BDD10 (thumb)

undefined4 sub_080BDD10(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  sub_08012738();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x9b00);
  sub_080128D4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  iVar1 = (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0x11) + 0x40 & 0xff];
  if (iVar1 < 0) {
    iVar1 = iVar1 + 3;
  }
  *(int *)(param_1 + 100) = iVar1 >> 2;
  iVar2 = (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0x11)];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 3;
  }
  *(int *)(param_1 + 0x68) = iVar2 >> 2;
  iVar5 = 0x17;
  do {
    iVar3 = *(int *)(param_1 + 0x5c) + (iVar1 >> 2);
    *(int *)(param_1 + 0x5c) = iVar3;
    iVar4 = *(int *)(param_1 + 0x60) + (iVar2 >> 2);
    *(int *)(param_1 + 0x60) = iVar4;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  *(undefined *)(param_1 + 0x12) = 0x18;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 1;
  sub_080BDB54(param_1);
  return in_lr;
}

