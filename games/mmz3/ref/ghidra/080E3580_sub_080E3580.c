// sub_080E3580 at 0x080E3580 (thumb)

undefined4 sub_080E3580(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0xb4);
  DAT_0202f5d0 = 1;
  sub_0801749C(param_1);
  sub_080176EC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(byte *)(iVar4 + 0x121) < 0x1b) {
    uVar3 = 0;
  }
  else {
    if (0x27 < *(byte *)(iVar4 + 0x121)) {
      uVar2 = sub_080E15D8(2);
      sub_08017700(param_1,uVar2);
      goto LAB_080e35e6;
    }
    uVar3 = 1;
  }
  uVar2 = sub_080E15D8(uVar3);
  sub_08017700(param_1,uVar2);
LAB_080e35e6:
  *(byte *)(param_1 + 0x4c) = *(byte *)(iVar4 + 10) >> 4 & 1;
  bVar1 = *(byte *)(iVar4 + 10) >> 4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar1 & 1) << 4);
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(undefined *)(param_1 + 0xba) = (&DAT_0836e55c)[*(byte *)(param_1 + 0x10)];
  *(undefined4 *)(param_1 + 0xc0) = 0xc00;
  *(undefined *)(param_1 + 0xb8) = 0;
  *(undefined *)(param_1 + 0xbb) = 0;
  *(undefined *)(param_1 + 0xb9) = 0x20;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e24c)[*(byte *)(param_1 + 9)] + 4);
  sub_080E3670(param_1);
  return in_lr;
}

