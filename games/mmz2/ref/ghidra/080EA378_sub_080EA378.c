// sub_080EA378 at 0x080EA378 (thumb)

undefined8 sub_080EA378(int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar6;
  ushort *puVar7;
  uint uVar8;
  undefined4 in_lr;
  uint uVar5;
  
  uVar8 = (uint)*(byte *)(param_1 + 5);
  if ((uVar8 - 1 < 4) && (uVar1 = DAT_02000d14 & 0x303, (DAT_02000d14 & 0x303) != 0)) {
    iVar6 = 0;
    iVar3 = 4;
    puVar7 = (ushort *)&UNK_0835e704;
    do {
      puVar7 = puVar7 + -1;
      iVar3 = iVar3 + -1;
      if ((*puVar7 & uVar1) != 0) {
        iVar6 = iVar6 + 1;
      }
    } while (iVar3 != 0);
    if (iVar6 == 1) {
      uVar5 = 4;
      do {
        uVar4 = uVar5 - 1;
        iVar3 = (uint)*(byte *)((int)&DAT_0835e702 + uVar5 + 1) * 2;
        uVar5 = uVar4;
      } while (uVar1 != *(ushort *)(*(int *)(param_1 + 0x10) + 0x1e4 + iVar3));
      if (uVar4 != uVar8 - 1) {
        iVar6 = *(int *)(param_1 + 0x10) + 0x1e4;
        puVar7 = (ushort *)(iVar6 + (uint)*(byte *)((int)&DAT_0835e702 + uVar8 + 1) * 2);
        *(ushort *)(iVar6 + iVar3) = *puVar7;
        *puVar7 = uVar1;
      }
    }
  }
  else {
    if ((DAT_02000d14 & 0xc0) != 0) {
      if ((DAT_02000d14 & 0x80) == 0) {
        uVar8 = uVar8 - 1;
      }
      else {
        uVar8 = uVar8 + 1;
      }
      sub_080032EC(1);
      if (uVar8 - 1 < 4) {
        *(char *)(param_1 + 5) = (char)uVar8;
      }
      else {
        if (uVar8 != 0) {
          *(undefined *)(param_1 + 4) = 1;
        }
        *(undefined *)(param_1 + 5) = 0;
      }
    }
    if (3 < uVar8 - 1) {
      sub_080EAA40(param_1);
      uVar2 = 0;
      goto LAB_080ea458;
    }
  }
  sub_080EAA4C(param_1);
  uVar2 = 1;
LAB_080ea458:
  return CONCAT44(in_lr,uVar2);
}

