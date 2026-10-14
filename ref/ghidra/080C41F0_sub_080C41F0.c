// sub_080C41F0 at 0x080C41F0 (thumb)

undefined8 sub_080C41F0(int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar8;
  undefined4 in_lr;
  uint uVar7;
  
  uVar8 = (uint)*(byte *)(param_1 + 5);
  if ((uVar8 - 1 < 4) && (uVar1 = DAT_02004ca8 & 0x303, (DAT_02004ca8 & 0x303) != 0)) {
    iVar4 = 0;
    iVar5 = 4;
    puVar3 = (ushort *)&UNK_082cc224;
    do {
      puVar3 = puVar3 + -1;
      iVar5 = iVar5 + -1;
      if ((uVar1 & *puVar3) != 0) {
        iVar4 = iVar4 + 1;
      }
    } while (iVar5 != 0);
    if (iVar4 == 1) {
      uVar7 = 4;
      do {
        uVar6 = uVar7 - 1;
        iVar4 = (uint)*(byte *)((int)&DAT_082cc222 + uVar7 + 1) * 2;
        uVar7 = uVar6;
      } while (uVar1 != *(ushort *)(*(int *)(param_1 + 0x10) + 0x208 + iVar4));
      if (uVar6 != uVar8 - 1) {
        iVar5 = *(int *)(param_1 + 0x10) + 0x208;
        puVar3 = (ushort *)(iVar5 + (uint)*(byte *)((int)&DAT_082cc222 + uVar8 + 1) * 2);
        *(ushort *)(iVar5 + iVar4) = *puVar3;
        *puVar3 = uVar1;
      }
    }
  }
  else {
    if ((DAT_02004ca8 & 0xc0) != 0) {
      if ((DAT_02004ca8 & 0x80) == 0) {
        uVar8 = uVar8 - 1;
      }
      else {
        uVar8 = uVar8 + 1;
      }
      sub_08001EAC(0x29);
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
      sub_080C4678(param_1);
      uVar2 = 0;
      goto LAB_080c42d0;
    }
  }
  sub_080C4684(param_1);
  uVar2 = 1;
LAB_080c42d0:
  return CONCAT44(in_lr,uVar2);
}

