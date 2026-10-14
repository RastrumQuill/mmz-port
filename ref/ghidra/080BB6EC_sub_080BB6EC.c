// sub_080BB6EC at 0x080BB6EC (thumb)

undefined8 sub_080BB6EC(int param_1)

{
  undefined uVar1;
  byte bVar2;
  undefined uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 in_lr;
  
  iVar4 = sub_080BB6B8();
  uVar1 = *(undefined *)(param_1 + 0x12);
  bVar2 = *(byte *)(param_1 + 0x13);
  uVar3 = sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b8e98 + (uint)*(byte *)(param_1 + 0x11) * 4))
  ;
  uVar5 = sub_080B4DA4(iVar4,uVar1,uVar3);
  if ((uVar5 & 0xff) - 1 < 0x4e) {
    uVar9 = (uVar5 << 0x18) >> 0x1b;
    if ((((int)(uint)*(byte *)(iVar4 + 0x1a4 + uVar9) >> (uVar5 & 7) & 1U) != 0) &&
       (iVar6 = sub_080B4634(uVar1), -1 < iVar6 * 0x1000000)) {
      uVar7 = sub_080BB5FC(iVar4,uVar5 & 0xff);
      uVar10 = uVar7 & 0xffff;
      if (uVar10 != bVar2) {
        *(char *)(param_1 + 0x13) = (char)uVar10;
        sub_080014E8(&DAT_08532000 + uVar10 * 0x14,0x10000);
        sub_0800179C(&DAT_0853200c + uVar10 * 0x14,0x200);
        sub_080B8C00(param_1,uVar7 & 0xff);
        sub_080033F0(param_1 + 0x6c,0);
      }
      if (((int)(uint)*(byte *)(iVar4 + 0x1ae + uVar9) >> (uVar5 & 7) & 1U) == 0) {
        *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0x70;
        *(undefined *)(param_1 + 0x1e) = 7;
      }
      else {
        *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0x60;
        *(undefined *)(param_1 + 0x1e) = 6;
      }
      uVar8 = 0;
      goto LAB_080bb7f0;
    }
  }
  uVar8 = 0xffffffff;
LAB_080bb7f0:
  return CONCAT44(in_lr,uVar8);
}

