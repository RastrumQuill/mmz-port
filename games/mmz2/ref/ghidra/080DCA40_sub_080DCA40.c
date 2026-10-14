// sub_080DCA40 at 0x080DCA40 (thumb)

undefined8 sub_080DCA40(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x12);
  bVar2 = *(byte *)(param_1 + 0x11);
  uVar3 = sub_080D5880((uint)bVar2,(uint)bVar1);
  uVar8 = uVar3 & 0xff;
  if (uVar8 != 0) {
    iVar4 = sub_080DCCAC(param_1);
    uVar7 = (uVar3 << 0x18) >> 0x1b;
    if (((int)(uint)*(byte *)(iVar4 + 0x228 + uVar7) >> (uVar3 & 7) & 1U) != 0) {
      iVar5 = sub_080D5968(iVar4,uVar8);
      uVar6 = (uint)*(ushort *)
                     (((iVar5 << 0x18) >> 0x17) +
                     (uint)bVar1 * 6 + *(int *)(&DAT_0834c03c + (uint)bVar2 * 4));
      sub_080127E4(param_1,uVar6);
      if (((int)(uint)*(byte *)(iVar4 + 0x233 + uVar7) >> (uVar3 & 7) & 1U) == 0) {
        sub_08012CA4(param_1,5);
      }
      else {
        iVar4 = sub_080D57CC(iVar4,uVar8);
        if ((iVar4 * 0x1000000 < 0) || (*(byte *)(param_1 + 0x13) < 0x18)) {
          sub_08012CA4(param_1,4);
        }
        else {
          sub_08012CA4(param_1,5);
        }
      }
      goto LAB_080dcb10;
    }
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  uVar6 = 0;
LAB_080dcb10:
  return CONCAT44(in_lr,uVar6);
}

