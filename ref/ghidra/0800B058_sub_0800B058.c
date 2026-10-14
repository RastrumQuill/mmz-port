// sub_0800B058 at 0x0800B058 (thumb)

undefined4 sub_0800B058(int param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  ushort auStack_20 [8];
  
  sub_080C8D70(auStack_20,&DAT_080c90e4,0x10);
  iVar2 = DAT_02022660;
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    uVar3 = *(uint *)(param_1 + 0x54);
    (&DAT_02004f34)[uVar3 >> 4] = (ushort)*(undefined4 *)(param_1 + 0x5c) | 0x4047;
    DAT_02004f30 = DAT_02004f30 & ~(ushort)(uVar3 << 8);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    DAT_0202266c = 0;
    iVar2 = DAT_02022660;
    break;
  case 1:
    DAT_02004f30 = (ushort)(*(int *)(param_1 + 0x54) << 8) | DAT_02004f30;
    DAT_02022660 = 0;
    iVar2 = DAT_02022660;
    if ((DAT_02022ad5 & 0x20) != 0) {
      *(undefined2 *)(param_1 + 0x10) = 0x5a;
      DAT_0202265c._0_2_ = 0;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      DAT_0202268e = sub_08001EAC(0x57);
      iVar2 = DAT_02022660;
    }
    break;
  case 2:
    uVar1 = *(ushort *)(param_1 + 0x10);
    if (uVar1 < 0x26) {
      if (uVar1 < 0x1e) {
        DAT_0202265c._0_2_ = 0x20;
      }
      else {
        DAT_0202265c._0_2_ = auStack_20[0x25 - (uint)*(ushort *)(param_1 + 0x10)];
      }
    }
    DAT_02022660 = DAT_02022660 + (short)(ushort)DAT_0202265c;
    *(ushort *)(param_1 + 0x10) = uVar1 - 1;
    iVar2 = DAT_02022660;
    if ((ushort)(uVar1 - 1) != -1) break;
    goto LAB_0800b1de;
  case 3:
    DAT_0202265c._0_2_ = (ushort)DAT_0202265c + 8;
    if (0x800 < (short)(ushort)DAT_0202265c) {
      DAT_0202265c._0_2_ = 0x800;
    }
    DAT_02022660 = DAT_02022660 + (short)(ushort)DAT_0202265c;
    iVar2 = DAT_02022660;
    if (*(int *)(param_1 + 0x34) + (DAT_02022660 >> 8) < 0x1ef0) break;
LAB_0800b1de:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    iVar2 = DAT_02022660;
    break;
  case 4:
    iVar4 = *(int *)(param_1 + 0x34) + (DAT_02022660 + 0x800 >> 8);
    if (iVar4 < 0x1fe0) {
      iVar2 = DAT_02022660 + 0x800;
      if (iVar4 < 0x1ef0) {
        iVar2 = DAT_02022660 + 0xf800;
      }
    }
    else {
      iVar2 = DAT_02022660 + -0xe800;
      if ((DAT_02022ad5 & 0x40) != 0) {
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
        DAT_02022660 = 0;
        DAT_0202265c._0_2_ = 0x800;
        DAT_02022690 = 0;
        iVar2 = DAT_02022660;
      }
    }
    break;
  case 5:
    if (0x1f67 < *(int *)(param_1 + 0x34) + (DAT_02022660 >> 8)) {
      uVar3 = (uint)(ushort)DAT_0202265c;
      DAT_0202265c._0_2_ = (ushort)(uVar3 - 6);
      if ((int)((uVar3 - 6) * 0x10000) < 0) {
        DAT_0202265c._0_2_ = 0;
        sub_08001EE8((int)DAT_0202268e);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      if ((DAT_02022690 < 0x96) && (DAT_02022690 = DAT_02022690 + 1, DAT_02022690 == 0x96)) {
        sub_08001EAC(0xe6);
      }
    }
    iVar2 = DAT_02022660 + (short)(ushort)DAT_0202265c;
  }
  DAT_02022660 = iVar2;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + (DAT_02022660 >> 8);
  if (((byte)(*(char *)(param_1 + 0xe) - 2U) < 3) &&
     (DAT_0202268d = DAT_0202268d + 1, 0x80 < DAT_0202268d)) {
    sub_0801412C(1,param_1 + 0x34);
    DAT_0202268d = 0x40;
  }
  return in_lr;
}

