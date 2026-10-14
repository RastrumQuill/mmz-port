// sub_08018E28 at 0x08018E28 (thumb)

undefined8 sub_08018E28(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  byte bVar11;
  uint uVar12;
  undefined4 in_lr;
  
  uVar12 = 0;
  iVar6 = *(int *)(param_1 + 0x4c);
  iVar8 = *(int *)(param_1 + 0x50);
  bVar1 = *(byte *)(param_1 + 10) >> 4;
  bVar5 = bVar1 & 1;
  if (((*(ushort *)(param_1 + 0x90) & 1) != 0) &&
     ((uVar12 = 1, (*(ushort *)(param_1 + 0x90) & 0x40) != 0 || (*(short *)(param_1 + 0x8c) == 0))))
  {
    uVar12 = 3;
  }
  if (((DAT_02022adf & 0x40) == 0) &&
     (((*(char *)(param_1 + 0x94) == '\0' || ((*(ushort *)(param_1 + 0x90) & 1) != 0)) &&
      (bVar11 = *(byte *)(param_1 + 0x128) & 0x43, (*(byte *)(param_1 + 0x128) & 0x43) == 0)))) {
    iVar9 = param_1 + 0x4c;
    piVar10 = (int *)(param_1 + 0xc4);
    cVar2 = sub_0801998C(iVar9,piVar10,*(undefined4 *)(param_1 + 0x108),bVar5,1,bVar11);
    if (cVar2 == '\x0f') {
      uVar12 = uVar12 | 8;
    }
    else {
      cVar2 = sub_08019E94(iVar9,piVar10,*(undefined4 *)(param_1 + 0x108),bVar5,1,bVar11);
      if (cVar2 != '\x0f') {
        bVar11 = *(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130);
        uVar3 = (bVar11 & 0xc) << 0x18;
        if (iVar6 - *piVar10 == 0) {
          if ((bVar11 & 0xc) == 0) goto LAB_08018f92;
          if ((bVar1 & 1) == 0) {
            uVar3 = ~(uVar3 >> 0x1a) & 1;
          }
          else {
            uVar3 = uVar3 >> 0x1b ^ 1;
          }
        }
        else {
          uVar3 = (uint)(iVar6 - *piVar10) >> 0x1f ^ (uint)((bVar1 & 1) == 0);
        }
        uVar4 = sub_0801A3C8(iVar9,piVar10,*(undefined4 *)(param_1 + 0x108),bVar5,1,0);
        uVar7 = uVar4 & 0xffff;
        if (uVar3 != 0) {
          uVar7 = (uVar4 << 0x10) >> 0x18;
        }
        if ((uVar7 & 0xff) != 0xf) goto LAB_08018f92;
      }
      uVar12 = uVar12 | 8;
    }
  }
LAB_08018f92:
  cVar2 = sub_0801C2EC(param_1);
  if (cVar2 != '\0') {
    uVar12 = uVar12 | 0x10;
  }
  cVar2 = sub_080066AC(iVar6,iVar8);
  if ((cVar2 != '\0') && (cVar2 = sub_080066AC(iVar6,iVar8 + -0x4000), cVar2 != '\0')) {
    uVar12 = uVar12 | 4;
  }
  *(char *)(param_1 + 0x12a) = (char)uVar12;
  if (uVar12 != 0) {
    uVar12 = 1;
  }
  return CONCAT44(in_lr,uVar12);
}

