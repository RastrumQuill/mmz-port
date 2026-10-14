// sub_08070F74 at 0x08070F74 (thumb)

undefined4 sub_08070F74(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  short asStack_30 [4];
  short asStack_28 [4];
  short asStack_20 [4];
  
  sub_08128B5C(asStack_30,&DAT_08129254,6);
  sub_08128B5C(asStack_28,&DAT_0812925a,6);
  sub_08128B5C(asStack_20,&DAT_08129260,6);
  bVar1 = *(byte *)(param_1 + 10) >> 4;
  uVar4 = bVar1 & 1;
  bVar2 = *(byte *)(param_1 + 0xc3);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080735E0(param_1,5);
    *(uint *)(param_1 + 0x5c) = (int)asStack_30[bVar2] * (uVar4 * 2 + -1);
    *(int *)(param_1 + 0x60) = -(int)asStack_28[bVar2];
    *(int *)(param_1 + 0x68) = (int)asStack_20[bVar2];
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
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if (*(char *)(param_1 + 0xf) == '\x01') {
      sub_08002B10(0x126);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar3 = sub_08073704(param_1);
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
      *(int *)(param_1 + 0x60) = iVar3;
      if (0x700 < iVar3) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
    }
    else {
      sub_080738E8(param_1);
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    if ((bVar1 & 1) == 0) {
      iVar3 = sub_08073638(param_1);
      if (iVar3 == 0) goto LAB_08071138;
      sub_080737D0(param_1);
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      iVar3 = sub_080736A0(param_1);
      if (iVar3 == 0) goto LAB_08071138;
      sub_0807385C(param_1);
      uVar4 = uVar4 + 1 & 1;
      *(char *)(param_1 + 0x4c) = (char)uVar4;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
      if (uVar4 == 0) {
        bVar2 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar2;
    }
    *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
  }
  else {
    sub_08073984(param_1);
  }
LAB_08071138:
  if (-1 < *(int *)(param_1 + 0x60)) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

