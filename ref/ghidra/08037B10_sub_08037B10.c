// sub_08037B10 at 0x08037B10 (thumb)

undefined4 sub_08037B10(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x12);
  bVar4 = cVar1 + 1;
  *(byte *)(param_1 + 0x12) = bVar4;
  bVar2 = cVar1 + 1;
  if (bVar2 < 0x10) {
    if ((bVar4 & 3) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
  }
  else if (bVar2 < 0x30) {
    if ((bVar4 & 2) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
  }
  else if ((bVar4 & 3) == 0) {
    bVar2 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(short *)(param_1 + 0x4a) =
       (short)((uint)(ushort)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12)] * 0x10000 + 0x1000000 >>
              0x10);
  if (*(char *)(param_1 + 0x12) == '@') {
    uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar3 & 0x7fffffff;
    uVar5 = uVar3 * 2 >> 0x11 & 3;
    bVar2 = *(byte *)(param_1 + 0xcd);
    iVar6 = *(int *)(param_1 + 0xe4) + ((uint)bVar2 * -0x20 + 0x10) * 0x100;
    *(byte *)(param_1 + 0xcd) = bVar2 ^ 1;
    *(int *)(param_1 + 0x4c) = iVar6;
    uVar3 = 0;
    do {
      if (uVar3 != uVar5) {
        sub_08068B74(param_1,uVar3 + 5 & 0xff);
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 4);
    *(uint *)(param_1 + 0x4c) = iVar6 + (uVar5 - 2) * 0x3000 + 0x1800;
    *(undefined *)(param_1 + 0xf) = 2;
    *(undefined4 *)(param_1 + 200) = 1;
  }
  return in_lr;
}

