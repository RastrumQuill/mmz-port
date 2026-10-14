// sub_080BAF8C at 0x080BAF8C (thumb)

undefined8 sub_080BAF8C(int param_1)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  undefined uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  uint uVar9;
  uint uVar10;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x12);
  bVar2 = *(byte *)(param_1 + 0x11);
  uVar5 = sub_080B460C((uint)bVar2,(uint)bVar1);
  uVar9 = uVar5 & 0xff;
  if (uVar9 != 0) {
    iVar6 = sub_080BB204(param_1);
    uVar10 = (uVar5 << 0x18) >> 0x1b;
    if (((int)(uint)*(byte *)(iVar6 + 0x1a4 + uVar10) >> (uVar5 & 7) & 1U) != 0) {
      iVar7 = sub_080B470C(iVar6,uVar9);
      psVar8 = (short *)(((iVar7 << 0x18) >> 0x17) +
                        (uint)bVar1 * 6 + *(int *)(&DAT_082b8bac + (uint)bVar2 * 4));
      sVar3 = *psVar8;
      sub_080033F0(param_1 + 0x6c,*(undefined *)psVar8);
      if (((int)(uint)*(byte *)(iVar6 + 0x1ae + uVar10) >> (uVar5 & 7) & 1U) == 0) {
LAB_080bb05c:
        *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0x90;
        uVar4 = 9;
      }
      else {
        iVar6 = sub_080B4550(iVar6,uVar9);
        if (iVar6 * 0x1000000 < 0) {
          *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0x80;
          uVar4 = 8;
        }
        else {
          if (0x17 < *(byte *)(param_1 + 0x13)) goto LAB_080bb05c;
          *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0x80;
          uVar4 = 8;
        }
      }
      *(undefined *)(param_1 + 0x1e) = uVar4;
      iVar6 = (int)sVar3;
      goto LAB_080bb084;
    }
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  iVar6 = -1;
LAB_080bb084:
  return CONCAT44(in_lr,iVar6);
}

