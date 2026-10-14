// sub_080778B4 at 0x080778B4 (thumb)

undefined4 sub_080778B4(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_08363b58);
    sub_08017700(param_1,0x2e06);
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffe80;
    uVar5 = 0xfffffe80;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar5 = 0x180;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar5;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar2;
  iVar2 = sub_0800A104(iVar2,*(undefined4 *)(param_1 + 0x58));
  if (0x800 < iVar2 - *(int *)(param_1 + 0x58)) {
    *(undefined *)(param_1 + 0xd) = 6;
    *(undefined *)(param_1 + 0xe) = 0;
    goto LAB_080779b6;
  }
  *(int *)(param_1 + 0x58) = iVar2;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar2 = sub_08009F80(*(int *)(param_1 + 0x54) + -0xa00,iVar2 + -0x800);
    if (iVar2 < 1) goto LAB_080779b6;
    *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
    bVar1 = *(byte *)(param_1 + 10);
    uVar3 = ~(uint)(bVar1 >> 4) & 1;
    if (uVar3 == 0) {
LAB_08077998:
      bVar1 = bVar1 & 0xef;
    }
    else {
      bVar1 = bVar1 | 0x10;
    }
  }
  else {
    iVar2 = sub_08009E14(*(int *)(param_1 + 0x54) + 0xa00,iVar2 + -0x800);
    if (-1 < iVar2) goto LAB_080779b6;
    *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
    bVar1 = *(byte *)(param_1 + 10);
    uVar3 = ~(uint)(bVar1 >> 4) & 1;
    if (uVar3 == 0) goto LAB_08077998;
    bVar1 = bVar1 | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
LAB_080779b6:
  uVar3 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
  if (0x6000 < uVar3) {
    if (iVar6 != 0) {
      pcVar4 = (char *)(iVar6 + 0xb8);
      *pcVar4 = *pcVar4 + -1;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  sub_080177F4(param_1);
  return in_lr;
}

