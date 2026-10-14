// sub_0801610C at 0x0801610C (thumb)

undefined8 sub_0801610C(int param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  sub_080162D0();
  bVar1 = *(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130);
  if ((bVar1 & 0xc) != 0) {
    bVar1 = bVar1 >> 3;
    *(byte *)(param_1 + 0x44) = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
  if (((*(byte *)(param_1 + 0x12d) & 0x20) != 0) &&
     (uVar4 = *(ushort *)(param_1 + 0x110), (uVar4 & 0xf) != 0)) {
    if ((uVar4 & 0xf0) == 0x80) {
      iVar8 = (*(ushort **)(param_1 + 0x108))[2] + 1 + *(int *)(param_1 + 0x50);
      uVar6 = (uint)**(ushort **)(param_1 + 0x108);
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar7 = *(int *)(param_1 + 0x4c) - uVar6;
      }
      else {
        iVar7 = uVar6 + *(int *)(param_1 + 0x4c);
      }
      uVar3 = sub_08009B9C(iVar7,iVar8);
      uVar4 = uVar3 & 0xff;
      if (((uVar3 & 0xf) == 0) || ((uVar3 & 0xf0) == 0x80)) {
        uVar6 = (uint)*(ushort *)(*(int *)(param_1 + 0x108) + 2);
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          iVar7 = uVar6 + *(int *)(param_1 + 0x4c);
        }
        else {
          iVar7 = *(int *)(param_1 + 0x4c) - uVar6;
        }
        uVar4 = sub_08009B9C(iVar7,iVar8);
        uVar4 = uVar4 & 0xff;
      }
    }
    if ((((uVar4 & 0xf) != 0) && ((uVar4 & 0xf0) != 0x80)) ||
       ((*(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130) & 2) == 0)) {
      *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
      *(undefined2 *)(param_1 + 0xe) = 1;
      if (*(byte *)(param_1 + 0x11e) < 100) {
        iVar8 = sub_080C8AD0((uint)*(byte *)(param_1 + 0x11e) * 0x500,100);
        iVar8 = 0x500 - iVar8;
      }
      else {
        iVar8 = 0;
      }
      *(int *)(param_1 + 0x58) = -iVar8;
      *(undefined4 *)(param_1 + 0x60) = 0x40;
      cVar2 = sub_08016EC0(param_1);
      if (cVar2 != '\0') {
        if (*(byte *)(param_1 + 0x11e) < 100) {
          iVar8 = sub_080C8AD0((uint)*(byte *)(param_1 + 0x11e) * 0x380,100);
          iVar8 = 0x380 - iVar8;
        }
        else {
          iVar8 = 0;
        }
        *(int *)(param_1 + 0x54) = iVar8;
        sub_0808D634(param_1 + 0x4c,*(byte *)(param_1 + 10) >> 4 & 1,0x200);
        sub_08001EAC(7);
      }
      if (*(byte *)(param_1 + 0xbe) < 3) {
        sub_08018BE8(param_1,5);
      }
      uVar5 = 1;
      goto LAB_080162c6;
    }
    *(undefined *)(param_1 + 0x119) = 1;
  }
  *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
  *(undefined2 *)(param_1 + 0xe) = 2;
  *(undefined4 *)(param_1 + 0x58) = 0x40;
  *(undefined4 *)(param_1 + 0x60) = 0x40;
  uVar5 = 2;
LAB_080162c6:
  return CONCAT44(in_lr,uVar5);
}

