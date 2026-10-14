// sub_080163B0 at 0x080163B0 (thumb)

undefined8 sub_080163B0(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 in_lr;
  bool bVar10;
  
  if (*(byte *)(param_1 + 0x11e) < 100) {
    uVar7 = (uint)*(byte *)(param_1 + 0x11e);
    iVar8 = 0x200;
    if (((*(byte *)(param_1 + 0x17a) & 1) != 0) && ((DAT_02022b62 & 0x8000) == 0)) {
      iVar8 = 0x280;
    }
    if (((*(byte *)(param_1 + 0x17a) & 1) == 0) || ((DAT_02022b62 & 0x8000) != 0)) {
      iVar5 = uVar7 << 9;
    }
    else {
      iVar5 = uVar7 * 0x280;
    }
    iVar5 = sub_080C8AD0(iVar5,100);
    iVar8 = iVar8 - iVar5;
  }
  else {
    iVar8 = 0;
  }
  *(int *)(param_1 + 0x54) = iVar8;
  bVar3 = *(byte *)(param_1 + 10) >> 4;
  uVar1 = **(ushort **)(param_1 + 0x108);
  if (((*(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130) & 0x20) == 0) ||
     (*(short *)(param_1 + 0x110) == 0)) {
    *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 2;
    uVar9 = 2;
    puVar6 = (ushort *)sub_08018D7C(param_1,6,0);
    *(undefined4 *)(param_1 + 0x58) = 0x40;
    *(undefined4 *)(param_1 + 0x60) = 0x40;
    if ((*(char *)(param_1 + 0x115) != '\b') || ('\x02' < *(char *)(param_1 + 0x71))) {
      bVar10 = (bVar3 & 1) == 0;
      *(bool *)(param_1 + 0x44) = bVar10;
      if (bVar10) {
        bVar4 = *(byte *)(param_1 + 10) | 0x10;
      }
      else {
        bVar4 = *(byte *)(param_1 + 10) & 0xef;
      }
      *(byte *)(param_1 + 10) = bVar4;
      uVar2 = puVar6[1];
      goto LAB_080164d2;
    }
  }
  else {
    sub_080164EC(param_1);
    uVar9 = 1;
    puVar6 = (ushort *)sub_08018D7C(param_1,5,0);
  }
  uVar2 = *puVar6;
LAB_080164d2:
  *(uint *)(param_1 + 0x4c) =
       *(int *)(param_1 + 0x4c) + ((bVar3 & 1) * 2 + -1) * ((uint)uVar1 - (uint)uVar2);
  return CONCAT44(in_lr,uVar9);
}

