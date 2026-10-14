// sub_0809C23C at 0x0809C23C (thumb)

undefined4 sub_0809C23C(int param_1)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  ushort *puVar4;
  int iVar5;
  char *pcVar6;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  if (*(char *)(iVar5 + 0xd) == '\n') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    *(undefined *)(param_1 + 0xd) = 0;
    sub_0809C0C4(param_1);
    return in_lr;
  }
  pcVar6 = (char *)(param_1 + 0xb4);
  *(int *)(param_1 + 0xbc) = *(int *)(iVar5 + 0x54) + *pcVar6 * 0x3400;
  *(int *)(param_1 + 0xc0) = *(int *)(iVar5 + 0x58) + -0x1200;
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    puVar4 = (ushort *)(param_1 + 0xb6);
    if (-1 < (short)*puVar4) {
      *puVar4 = 0;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 == '\0') {
      *(undefined *)(param_1 + 0x12) = 1;
    }
    uVar2 = *puVar4;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(int *)(param_1 + 0x54) = *(int *)(iVar5 + 0x54) + *pcVar6 * 0x1400;
        *(int *)(param_1 + 0x58) = *(int *)(iVar5 + 0x58) + -0x1200;
      }
      goto LAB_0809c38a;
    }
    if (bVar1 != 0) goto LAB_0809c38a;
    puVar4 = (ushort *)(param_1 + 0xb6);
    if ((short)*puVar4 < 0) {
      *puVar4 = 0x8000;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    uVar2 = *puVar4;
  }
  iVar5 = (uint)*(ushort *)(param_1 + 0xb8) *
          (int)(short)(&DAT_080ef450)[(uVar2 >> 8) + 0x40 & 0xff];
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xbc) - (int)*pcVar6 * (iVar5 >> 8);
  iVar5 = (int)(short)(&DAT_080ef450)[uVar2 >> 8] * (uint)*(ushort *)(param_1 + 0xba);
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xc0) + (iVar5 >> 8);
  *(short *)(param_1 + 0xb6) = (ushort)*(byte *)(param_1 + 0x12) * 0x80 + *(short *)(param_1 + 0xb6)
  ;
LAB_0809c38a:
  sub_080128D4(param_1);
  return in_lr;
}

