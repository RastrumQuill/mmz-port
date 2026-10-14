// sub_08032CC0 at 0x08032CC0 (thumb)

undefined8 sub_08032CC0(int param_1,ushort *param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195));
  if ((bVar1 & 0xc) != 0) {
    uVar6 = *(byte *)(param_1 + 10) >> 4 & 1;
    bVar1 = bVar1 >> 3;
    uVar7 = uVar6 ^ bVar1 & 1;
    if (param_3 + 0x37fU < 0x6ff) {
      if (((*(byte *)(param_1 + 0x202) & 4) != 0) || (*(char *)(param_1 + 0x1fc) == '\x05')) {
        uVar2 = DAT_0202ec34;
        if (*(char *)(param_1 + 0x10) != '\0') {
          uVar2 = DAT_0202ec36;
        }
        if ((uVar2 & 0x8000) == 0) {
          uVar5 = 0x280;
          goto LAB_08032d5c;
        }
      }
      uVar5 = 0x200;
    }
    else {
      uVar5 = 0x380;
    }
LAB_08032d5c:
    iVar3 = sub_08021404(param_1 + 0x54,param_1 + 0xb4,param_1 + 0xd8,param_2,
                         *(undefined4 *)(param_1 + 0xdc),uVar6,uVar5,uVar7);
    if (iVar3 != 0) {
      puVar4 = (ushort *)sub_0801EF38(param_1,8,0);
      if (param_2 != puVar4) {
        iVar3 = -1;
        if ((bVar1 & 1) != 0) {
          iVar3 = 1;
        }
        *(uint *)(param_1 + 0x54) =
             *(int *)(param_1 + 0x54) + iVar3 * ((uint)param_2[uVar7] - (uint)*puVar4);
      }
      uVar5 = 1;
      goto LAB_08032db2;
    }
  }
  uVar5 = 0;
LAB_08032db2:
  return CONCAT44(in_lr,uVar5);
}

