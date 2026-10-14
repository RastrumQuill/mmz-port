// sub_080E6150 at 0x080E6150 (thumb)

undefined4 sub_080E6150(int param_1)

{
  short sVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  sVar5 = -0x7f00;
  sVar1 = -0x7f00;
  if (*(byte *)(param_1 + 0x10) < 2) {
    sVar5 = -0x7ef2;
    sVar1 = -0x7ef2;
  }
  pbVar2 = (byte *)(*(int *)(iVar6 + 0x64ac) + 0xbc + (uint)*(byte *)(param_1 + 0x10));
  bVar3 = *pbVar2;
  if (bVar3 != 0) {
    if (bVar3 == 0x20) {
      sVar1 = sVar1 + 0xb;
    }
    else if (bVar3 == 0x1f) {
      sVar1 = sVar1 + 10;
    }
    else {
      sVar1 = FUN_080fe2f8(*pbVar2 - 1,3);
      sVar1 = sVar5 + sVar1 + 1;
    }
  }
  sub_08017700(param_1,sVar1);
  sub_080177F4(param_1);
  bVar3 = *(byte *)(param_1 + 0xd);
  if (bVar3 == 1) {
LAB_080e61f4:
    bVar3 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar3;
    *(uint *)(param_1 + 0x54) =
         (uint)(byte)(&DAT_0836e824)[*(byte *)(param_1 + 0x11)] * 0x100 +
         (uint)*(byte *)(param_1 + 0x11) * (uint)*(byte *)(param_1 + 0x12) * 0x100;
    if (bVar3 < 8) goto LAB_080e625e;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else {
    if (bVar3 < 2) {
      if (((bVar3 != 0) ||
          (*(uint *)(param_1 + 0x54) = (uint)(byte)(&DAT_0836e824)[*(byte *)(param_1 + 0x11)] << 8,
          *(char *)(iVar6 + 3) != '\x03')) || (*(char *)(iVar6 + 0xe17) != '\x01'))
      goto LAB_080e625e;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      *(undefined *)(param_1 + 0x12) = 0;
      goto LAB_080e61f4;
    }
    if (bVar3 != 2) {
      if (bVar3 == 3) {
        cVar4 = *(char *)(param_1 + 0x12) + -1;
        *(char *)(param_1 + 0x12) = cVar4;
        *(uint *)(param_1 + 0x54) =
             (uint)(byte)(&DAT_0836e824)[*(byte *)(param_1 + 0x11)] * 0x100 +
             (uint)*(byte *)(param_1 + 0x11) * (uint)*(byte *)(param_1 + 0x12) * 0x100;
        if (cVar4 == '\0') {
          *(undefined *)(param_1 + 0xd) = 0;
        }
      }
      goto LAB_080e625e;
    }
  }
  if (*(char *)(iVar6 + 0xe17) == '\x04') {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
LAB_080e625e:
  if (*(char *)(iVar6 + 0xdd0) == '\0') {
    if (0x100 < (ushort)DAT_020023d0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x20000;
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e764)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

