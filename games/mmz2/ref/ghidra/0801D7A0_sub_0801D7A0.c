// sub_0801D7A0 at 0x0801D7A0 (thumb)

undefined8 sub_0801D7A0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  iVar1 = DAT_02036e98;
  if ((DAT_0202ebb4 & 1) == 0) {
    if (*(char *)(param_1 + 1) == '\0') {
      if (*(char *)(DAT_0202ebf0 + 0x13) == '\x01') goto LAB_0801da1e;
      if (((*(ushort *)(DAT_02036e98 + 0x200) & 0x100) == 0) &&
         (*(char *)(DAT_0202ebf0 + 0x13) == '\x10')) {
        *(ushort *)(DAT_02036e98 + 0x200) = *(ushort *)(DAT_02036e98 + 0x200) | 0x100;
        sub_080DEF4C(0x130);
        uVar2 = *(uint *)(param_1 + 0xc);
        uVar5 = 0x8000;
LAB_0801d9c0:
        *(uint *)(param_1 + 0xc) = uVar2 | uVar5;
      }
      else {
        if (((*(ushort *)(DAT_02036e98 + 0x200) & 0x200) == 0) &&
           (iVar3 = sub_080D6630(DAT_02036e98), iVar3 != 0)) {
          *(ushort *)(iVar1 + 0x200) = *(ushort *)(iVar1 + 0x200) | 0x200;
          sub_080DEF4C(0x131);
          uVar2 = *(uint *)(param_1 + 0xc);
          uVar5 = 0x80;
          goto LAB_0801d9c0;
        }
        if (((*(ushort *)(iVar1 + 0x200) & 2) == 0) && (0x18 < DAT_0202ec14)) {
          *(ushort *)(iVar1 + 0x200) = *(ushort *)(iVar1 + 0x200) | 2;
          sub_080DEF4C(0x129);
          uVar2 = *(uint *)(param_1 + 0xc);
          uVar5 = 0x100;
          goto LAB_0801d9c0;
        }
        if (((*(ushort *)(iVar1 + 0x200) & 4) == 0) && (0x31 < DAT_0202ec15)) {
          *(ushort *)(iVar1 + 0x200) = *(ushort *)(iVar1 + 0x200) | 4;
          sub_080DEF4C(0x12a);
          uVar2 = *(uint *)(param_1 + 0xc);
          uVar5 = 0x200;
          goto LAB_0801d9c0;
        }
        if (((*(ushort *)(iVar1 + 0x200) & 8) == 0) && (0x13 < DAT_0202ec16)) {
          *(ushort *)(iVar1 + 0x200) = *(ushort *)(iVar1 + 0x200) | 8;
          sub_080DEF4C(299);
          uVar2 = *(uint *)(param_1 + 0xc);
          uVar5 = 0x400;
          goto LAB_0801d9c0;
        }
        if (((*(ushort *)(iVar1 + 0x200) & 0x10) == 0) && (0x1d < DAT_0202ec17)) {
          *(ushort *)(iVar1 + 0x200) = *(ushort *)(iVar1 + 0x200) | 0x10;
          sub_080DEF4C(300);
          uVar2 = *(uint *)(param_1 + 0xc);
          uVar5 = 0x800;
          goto LAB_0801d9c0;
        }
        if (((*(ushort *)(iVar1 + 0x200) & 0x20) == 0) && (0x13 < DAT_0202ec18)) {
          *(ushort *)(iVar1 + 0x200) = *(ushort *)(iVar1 + 0x200) | 0x20;
          sub_080DEF4C(0x12d);
          uVar2 = *(uint *)(param_1 + 0xc);
          uVar5 = 0x1000;
          goto LAB_0801d9c0;
        }
        if (((*(ushort *)(iVar1 + 0x200) & 0x40) == 0) && (0x1d < DAT_0202ec19)) {
          *(ushort *)(iVar1 + 0x200) = *(ushort *)(iVar1 + 0x200) | 0x40;
          sub_080DEF4C(0x12e);
          uVar2 = *(uint *)(param_1 + 0xc);
          uVar5 = 0x2000;
          goto LAB_0801d9c0;
        }
        if (((*(ushort *)(iVar1 + 0x200) & 0x80) == 0) && (0x13 < DAT_0202ec1a)) {
          *(ushort *)(iVar1 + 0x200) = *(ushort *)(iVar1 + 0x200) | 0x80;
          sub_080DEF4C(0x12f);
          uVar2 = *(uint *)(param_1 + 0xc);
          uVar5 = 0x4000;
          goto LAB_0801d9c0;
        }
      }
      *(undefined *)(param_1 + 1) = 1;
    }
    if (DAT_0202f65a == 0) {
      if (*(char *)(param_1 + 1) == '\x01') {
        if (((*(ushort *)(iVar1 + 0x200) & 0x200) == 0) &&
           (iVar3 = sub_080D6630(DAT_02036e98), iVar3 != 0)) {
          *(ushort *)(iVar1 + 0x200) = *(ushort *)(iVar1 + 0x200) | 0x200;
          sub_080DEF4C(0x131);
          *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x80;
        }
        *(undefined *)(param_1 + 1) = 2;
      }
      if (DAT_0202f65a == 0) goto LAB_0801da1e;
    }
    uVar4 = 1;
  }
  else {
LAB_0801da1e:
    uVar4 = 0;
  }
  return CONCAT44(in_lr,uVar4);
}

