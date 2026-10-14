// sub_08063814 at 0x08063814 (thumb)

undefined4 sub_08063814(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  uVar6 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x110);
    sub_08066468(param_1 + 0x54,1,1);
    sub_08065A40(param_1,0xb);
    iVar5 = uVar6 * 2 + -1;
    *(int *)(param_1 + 0x5c) = iVar5 * 0x200;
    *(int *)(param_1 + 100) = iVar5 * 0x10;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5 * 0xa00;
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0x13) = (char)uVar6;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  bVar1 = *(byte *)(param_1 + 0x13);
  if ((bVar1 & 1) == 0) {
    iVar5 = *(int *)(param_1 + 0xd0);
    iVar4 = 0x2800;
  }
  else {
    iVar5 = *(int *)(param_1 + 0xd0);
    iVar4 = 0xc800;
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       (&DAT_08857a44)
                       [*(ushort *)(&DAT_08857b64 + (uint)*(byte *)(param_1 + 0xb4) * 2)]) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                       *(int *)(&DAT_08857b5c + (uint)*(byte *)(param_1 + 0xb5) * 4)
                                       ) + (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(char *)(param_1 + 0x12) != '\0') {
    sub_08005784(param_1 + 0x74,&DAT_08857710);
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  iVar8 = *(int *)(param_1 + 0x5c);
  iVar7 = *(int *)(param_1 + 100);
  iVar3 = FUN_081288bc(-iVar8,-iVar7);
  if ((int)(((*(int *)(param_1 + 0x54) + ((iVar8 * 2 + -iVar7 * iVar3) * (iVar3 + 1) >> 1)) -
            (iVar4 + iVar5)) * ((bVar1 & 1) * 2 + -1)) < 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar8;
  }
  else {
    *(undefined *)(param_1 + 0xe) = 3;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

