// sub_0802052C at 0x0802052C (thumb)

undefined4 sub_0802052C(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  bVar1 = *(byte *)(param_1 + 0x12a);
  if ((bVar1 & 0x1e) == 0) {
    *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 1;
    sub_080205D4(param_1);
  }
  else if ((((bVar1 & 4) == 0) || ((bVar1 & 0x1a) != 0)) ||
          (iVar2 = sub_080B518C(param_1), iVar2 == 0)) {
    *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 2;
    sub_08020898(param_1);
  }
  else {
    *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
    *(ushort *)(param_1 + 0xe) = bVar1 & 0x1a;
    *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
    *(undefined *)(param_1 + 0xbe) = 0;
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 0;
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 0;
    sub_08020A20(param_1);
  }
  return in_lr;
}

