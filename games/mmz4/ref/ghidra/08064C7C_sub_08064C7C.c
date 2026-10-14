// sub_08064C7C at 0x08064C7C (thumb)

undefined4 sub_08064C7C(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x111);
    if (*(int *)(param_1 + 0xc4) != 0) {
      *(undefined *)(*(int *)(param_1 + 0xc4) + 0xb4) = 1;
    }
    iVar4 = *(int *)(param_1 + 0xbc);
    if (iVar4 != 0) {
      *(undefined *)(iVar4 + 0xb5) = 1;
      *(int *)(param_1 + 0xbc) = 0;
    }
    iVar4 = *(int *)(param_1 + 200);
    if (iVar4 != 0) {
      *(byte *)(iVar4 + 10) = *(byte *)(iVar4 + 10) & 0xfc;
      *(undefined4 *)(iVar4 + 0x8c) = 0;
      *(undefined4 *)(iVar4 + 0x90) = 0;
      *(undefined *)(iVar4 + 0x94) = 0;
      *(byte *)(iVar4 + 10) = *(byte *)(iVar4 + 10) & 0xfb;
      *(undefined4 *)(iVar4 + 0xc) = 3;
      *(undefined4 *)(iVar4 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(iVar4 + 9) * 4) + 0xc);
      *(int *)(param_1 + 200) = 0;
    }
    iVar4 = *(int *)(param_1 + 0xd8);
    if (iVar4 != 0) {
      *(byte *)(iVar4 + 10) = *(byte *)(iVar4 + 10) & 0xfc;
      *(undefined4 *)(iVar4 + 0x8c) = 0;
      *(undefined4 *)(iVar4 + 0x90) = 0;
      *(undefined *)(iVar4 + 0x94) = 0;
      *(byte *)(iVar4 + 10) = *(byte *)(iVar4 + 10) & 0xfb;
      *(undefined4 *)(iVar4 + 0xc) = 3;
      *(undefined4 *)(iVar4 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(iVar4 + 9) * 4) + 0xc);
      *(int *)(param_1 + 0xd8) = 0;
    }
    sub_08066468(param_1 + 0x54,2,1);
    bVar1 = *(byte *)(param_1 + 0xb6);
    sub_08065A40(param_1,0xd);
    uVar5 = bVar1 & 1;
    *(char *)(param_1 + 0x4c) = (char)uVar5;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
    if ((bVar1 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    iVar4 = ((uint)bVar1 * 2 + -1) * -0x180;
    *(int *)(param_1 + 0x5c) = iVar4;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0x1f;
    }
    *(int *)(param_1 + 100) = -(iVar4 >> 5);
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       (&DAT_08857a44)
                       [*(ushort *)(&DAT_08857b64 + (uint)*(byte *)(param_1 + 0xb4) * 2)]) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                       *(int *)(&DAT_08857b5c + (uint)*(byte *)(param_1 + 0xb5) * 4)
                                       ) + (int)*(char *)(param_1 + 0x71)) * 0x18);
  if ((*(char *)(param_1 + 0x12) == '\0') ||
     (cVar3 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar3, cVar3 == '\0')) {
    if (*(int *)(param_1 + 0x2c) == 0) {
      sub_08065ED0(param_1);
    }
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  }
  return in_lr;
}

