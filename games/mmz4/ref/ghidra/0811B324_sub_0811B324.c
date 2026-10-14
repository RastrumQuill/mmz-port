// sub_0811B324 at 0x0811B324 (thumb)

undefined4 sub_0811B324(int param_1,ushort param_2,uint param_3,uint param_4)

{
  short sVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  ushort *puVar5;
  undefined4 in_lr;
  
  param_3 = param_3 & 0xffff;
  sVar1 = (short)(param_4 & 0xff);
  if (param_2 == 4) {
    puVar5 = (ushort *)(param_3 * 2 + param_1);
    uVar3 = sVar1 * 0x1000;
    *puVar5 = uVar3 | 0xb8;
    puVar5[1] = uVar3 | 0xb9;
    puVar5[2] = uVar3 | 0xba;
    puVar5[3] = uVar3 | 0xbb;
    puVar5[4] = uVar3 | 0xbc;
    return in_lr;
  }
  if (param_2 < 5) {
    if (param_2 == 1) {
      puVar5 = (ushort *)(param_3 * 2 + param_1);
      uVar3 = 0x80;
    }
    else {
      if (param_2 != 2) {
LAB_0811b358:
        iVar2 = param_3 << 1;
        uVar4 = (ushort)((param_4 & 0xff) << 0xc);
        goto LAB_0811b3be;
      }
      puVar5 = (ushort *)(param_3 * 2 + param_1);
      uVar3 = 0x81;
    }
  }
  else if (param_2 == 0x100) {
    puVar5 = (ushort *)(param_3 * 2 + param_1);
    uVar3 = 0x84;
  }
  else {
    if (param_2 != 0x200) goto LAB_0811b358;
    puVar5 = (ushort *)(param_3 * 2 + param_1);
    uVar3 = 0x83;
  }
  iVar2 = param_3 * 2;
  uVar4 = sVar1 * 0x1000;
  *puVar5 = uVar4 | uVar3;
LAB_0811b3be:
  iVar2 = iVar2 + param_1;
  *(ushort *)(iVar2 + 2) = uVar4 | 0xad;
  *(ushort *)(iVar2 + 4) = uVar4 | 0xae;
  *(ushort *)(iVar2 + 6) = uVar4 | 0xaf;
  *(ushort *)(iVar2 + 8) = uVar4 | 0xb0;
  return in_lr;
}

