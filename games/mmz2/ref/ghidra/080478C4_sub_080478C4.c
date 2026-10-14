// sub_080478C4 at 0x080478C4 (thumb)

undefined4 sub_080478C4(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa502);
    *(undefined *)(*(int *)(param_1 + 0x28) + 0x11) = 1;
    *(undefined *)(*(int *)(param_1 + 0xcc) + 0x11) = 1;
    sub_08003338((int)*(short *)(param_1 + 0xde));
    *(short *)(param_1 + 0xde) = -1;
    iVar4 = *(int *)(param_1 + 0xc4) + 0xd000;
    *(int *)(param_1 + 0x54) = iVar4;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + -0xa000;
    iVar3 = DAT_0202e130;
    *(bool *)(param_1 + 0x4c) = iVar4 < *(int *)(DAT_0202e130 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar3 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    sub_08006E08(param_1 + 0x74,&DAT_0833aa94);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar3 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar3;
  uVar5 = *(int *)(param_1 + 0x58) + iVar3;
  *(uint *)(param_1 + 0x58) = uVar5;
  if (*(uint *)(param_1 + 0xd4) < uVar5) {
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0xd4);
    *(undefined *)(param_1 + 0xd) = 0x1e;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 4;
    *(undefined *)(param_1 + 0x12) = 0x10;
  }
  return in_lr;
}

