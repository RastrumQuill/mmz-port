// sub_08031C24 at 0x08031C24 (thumb)

undefined8 sub_08031C24(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 in_lr;
  bool bVar10;
  
  uVar5 = (uint)*(byte *)(param_1 + 0x182);
  if (uVar5 < 100) {
    if (((*(byte *)(param_1 + 0x202) & 4) == 0) && (*(char *)(param_1 + 0x1fc) != '\x05')) {
LAB_08031c78:
      iVar8 = 0x200;
    }
    else {
      uVar1 = DAT_0202ec34;
      if (*(char *)(param_1 + 0x10) != '\0') {
        uVar1 = DAT_0202ec36;
      }
      if ((uVar1 & 0x8000) != 0) goto LAB_08031c78;
      iVar8 = 0x280;
    }
    if (((*(byte *)(param_1 + 0x202) & 4) == 0) && (*(char *)(param_1 + 0x1fc) != '\x05')) {
LAB_08031cc0:
      iVar6 = uVar5 << 9;
    }
    else {
      uVar1 = DAT_0202ec34;
      if (*(char *)(param_1 + 0x10) != '\0') {
        uVar1 = DAT_0202ec36;
      }
      if ((uVar1 & 0x8000) != 0) goto LAB_08031cc0;
      iVar6 = uVar5 * 0x280;
    }
    iVar6 = sub_080EF150(iVar6,100);
    iVar8 = iVar8 - iVar6;
  }
  else {
    iVar8 = 0;
  }
  *(int *)(param_1 + 0xc4) = iVar8;
  bVar3 = *(byte *)(param_1 + 10) >> 4;
  uVar1 = **(ushort **)(param_1 + 0xd8);
  if (((*(byte *)(param_1 + 0x196) & 0x20) == 0) ||
     (((*(ushort *)(param_1 + 0xe8) | *(ushort *)(param_1 + 0xea)) & 0xd) == 0)) {
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 2;
    uVar9 = 2;
    *(undefined4 *)(param_1 + 0x60) = 0x40;
    *(undefined4 *)(param_1 + 0x68) = 0x40;
    puVar7 = (ushort *)sub_080375A8(param_1,6,0);
    if ((*(char *)(param_1 + 0x17f) != '\b') || ('\x02' < *(char *)(param_1 + 0x71))) {
      *(bool *)(param_1 + 0x4c) = (bVar3 & 1) == 0;
      bVar10 = (bVar3 & 1) == 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar10 << 4;
      if (bVar10) {
        bVar4 = *(byte *)(param_1 + 10) | 0x10;
      }
      else {
        bVar4 = *(byte *)(param_1 + 10) & 0xef;
      }
      *(byte *)(param_1 + 10) = bVar4;
      uVar2 = puVar7[1];
      goto LAB_08031da6;
    }
  }
  else {
    sub_08031DC4(param_1);
    uVar9 = 1;
    puVar7 = (ushort *)sub_080375A8(param_1,5,0);
  }
  uVar2 = *puVar7;
LAB_08031da6:
  iVar8 = (uint)uVar1 - (uint)uVar2;
  if ((bVar3 & 1) == 0) {
    iVar8 = -iVar8;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar8;
  return CONCAT44(in_lr,uVar9);
}

