// sub_0809C0F4 at 0x0809C0F4 (thumb)

undefined4 sub_0809C0F4(int param_1)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(char *)(iVar4 + 0xd) == '\n') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    *(undefined *)(param_1 + 0xd) = 0;
    sub_0809C0C4(param_1);
    return in_lr;
  }
  pcVar5 = (char *)(param_1 + 0xb4);
  *(int *)(param_1 + 0xbc) = *(int *)(iVar4 + 0x54) + *pcVar5 * 0xd00;
  *(int *)(param_1 + 0xc0) = *(int *)(iVar4 + 0x58) + -0x1200;
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    if (-1 < (short)*(ushort *)(param_1 + 0xb6)) {
      *(undefined *)(param_1 + 0xd) = 2;
    }
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 == '\0') {
      *(undefined *)(param_1 + 0x12) = 1;
    }
    uVar2 = *(ushort *)(param_1 + 0xb6);
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(int *)(param_1 + 0x54) = *(int *)(iVar4 + 0x54) + *pcVar5 * -0xf00;
        *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) + -0x1200;
      }
      goto LAB_0809c22a;
    }
    if (bVar1 != 0) goto LAB_0809c22a;
    if ((short)*(ushort *)(param_1 + 0xb6) < 0) {
      *(undefined *)(param_1 + 0xd) = 1;
    }
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    uVar2 = *(ushort *)(param_1 + 0xb6);
  }
  iVar4 = (uint)*(ushort *)(param_1 + 0xb8) *
          (int)(short)(&DAT_080ef450)[(uVar2 >> 8) + 0x40 & 0xff];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xbc) - (int)*pcVar5 * (iVar4 >> 8);
  iVar4 = (int)(short)(&DAT_080ef450)[uVar2 >> 8] * (uint)*(ushort *)(param_1 + 0xba);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xc0) + (iVar4 >> 8);
  *(short *)(param_1 + 0xb6) = (ushort)*(byte *)(param_1 + 0x12) * 0xc0 + *(short *)(param_1 + 0xb6)
  ;
LAB_0809c22a:
  sub_080128D4(param_1);
  return in_lr;
}

