// sub_0802A274 at 0x0802A274 (thumb)

undefined4 sub_0802A274(int param_1)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar8 = *(int *)(param_1 + 0x5c);
  if (iVar8 != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar8;
    sub_0801F5F4(param_1 + 0x54,param_1 + 0xb4,(undefined4 *)(param_1 + 0xd8),
                 *(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc),
                 *(byte *)(param_1 + 10) >> 4 & 1,iVar8,1,1,0,1);
    iVar6 = 1;
    if (0 < iVar8) {
      iVar6 = -1;
    }
    iVar8 = iVar8 + iVar6 * 0x28;
    if (0 < iVar8 * iVar6 * 0x28) {
      iVar8 = 0;
    }
    *(int *)(param_1 + 0x5c) = iVar8;
  }
  iVar6 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar6;
  puVar7 = (undefined4 *)(param_1 + 0xd8);
  uVar3 = sub_0801F5B8(param_1 + 0x54,param_1 + 0xb4,puVar7,*puVar7,*(undefined4 *)(param_1 + 0xdc),
                       *(byte *)(param_1 + 10) >> 4 & 1,1,1,0,1);
  bVar2 = sub_08022C40(param_1,*puVar7);
  *(byte *)(param_1 + 0x18a) = bVar2;
  iVar8 = -1;
  if (iVar6 < 1) {
    iVar8 = 1;
  }
  if (bVar2 < 100) {
    iVar4 = sub_080EF2B8((uint)bVar2 << 5,100);
    iVar8 = (0x40 - iVar4) * iVar8;
  }
  else {
    iVar8 = iVar8 << 5;
  }
  iVar6 = iVar6 + iVar8;
  if ((iVar8 * iVar6 < 0) && ((uVar3 & 0x4f) == 0)) goto LAB_0802a3c4;
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 4;
  if (((*(byte *)(param_1 + 0x202) & 4) == 0) && (*(char *)(param_1 + 0x1fc) != '\x05')) {
LAB_0802a3b0:
    uVar5 = 0x200;
  }
  else {
    uVar1 = DAT_0202ec34;
    if (*(char *)(param_1 + 0x10) != '\0') {
      uVar1 = DAT_0202ec36;
    }
    if ((uVar1 & 0x8000) != 0) goto LAB_0802a3b0;
    uVar5 = 0x280;
  }
  *(undefined4 *)(param_1 + 0xc4) = uVar5;
  if (iVar8 * iVar6 < 0) {
    iVar6 = 0;
  }
  *(undefined4 *)(param_1 + 0x68) = 0x40;
LAB_0802a3c4:
  *(int *)(param_1 + 0x60) = iVar6;
  return in_lr;
}

