// sub_080FDDB8 at 0x080FDDB8 (thumb)

undefined4 sub_080FDDB8(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005500(DAT_0202eda0);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x1e;
    *(undefined *)(iVar1 + 9) = 0x2f;
    *(undefined4 *)(iVar1 + 0x14) = 0x80fd9e1;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
    *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
    DAT_0202db00 = sub_080146BC(param_2,param_3);
    if (DAT_0202db00 == 0xd7) {
      uVar2 = (param_2 & 0xfffff000) + 0x1000;
    }
    else if ((DAT_0202db00 == 0xd8) || ((DAT_0202db00 & 1) != 0)) {
      uVar2 = param_2 & 0xfffff000;
    }
    else {
      uVar2 = (param_2 & 0xfffff000) + 0x1000;
    }
    *(uint *)(iVar1 + 0x54) = uVar2;
    *(uint *)(iVar1 + 0x58) = (param_3 & 0xfffff000) + 0x1000;
    *(undefined *)(iVar1 + 0x10) = 1;
    *(char *)(iVar1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
    sub_080FDE88(iVar1 + 0x54,0);
    sub_08014720(param_2,param_3);
  }
  return in_lr;
}

