// sub_08071154 at 0x08071154 (thumb)

undefined4 sub_08071154(int param_1)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  short asStack_20 [4];
  
  sub_08128B5C(asStack_20,&DAT_08129260,6);
  bVar1 = *(byte *)(param_1 + 10) >> 4;
  bVar2 = false;
  bVar3 = *(byte *)(param_1 + 0xc3);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080735E0(param_1,6);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(int *)(param_1 + 0x68) = (int)asStack_20[bVar3];
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       (&DAT_088595cc)
                       [*(ushort *)(&DAT_088596c8 + (uint)*(byte *)(param_1 + 0xb8) * 2)]) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 +
                                       *(int *)(&DAT_088596c0 + (uint)*(byte *)(param_1 + 0xb9) * 4)
                                       ) + (int)*(char *)(param_1 + 0x71)) * 0x18);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar4 = sub_0807376C(param_1);
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar4;
    if (0x700 < iVar4) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
  }
  else {
    sub_08073984(param_1);
    *(undefined4 *)(param_1 + 0x60) = 0;
    bVar2 = true;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  if ((bVar1 & 1) == 0) {
    iVar4 = sub_08073638(param_1);
    if (iVar4 == 0) goto LAB_080712c0;
    sub_080737D0(param_1);
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    iVar4 = sub_080736A0(param_1);
    if (iVar4 == 0) goto LAB_080712c0;
    sub_0807385C(param_1);
    uVar5 = (bVar1 & 1) + 1 & 1;
    *(char *)(param_1 + 0x4c) = (char)uVar5;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
    if (uVar5 == 0) {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar3;
  }
  *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
LAB_080712c0:
  if (bVar2) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

