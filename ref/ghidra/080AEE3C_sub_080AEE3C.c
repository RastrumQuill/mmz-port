// sub_080AEE3C at 0x080AEE3C (thumb)

undefined4 sub_080AEE3C(int param_1)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  ushort *puVar5;
  short *psVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    sub_08001EAC(0xd4);
  }
  sub_0809C980(param_1);
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    puVar5 = (ushort *)(param_1 + 0xc6);
    uVar2 = *puVar5;
    *puVar5 = (ushort)(uVar2 - 0x20);
    if (0xff < (int)((uVar2 - 0x20) * 0x10000) >> 0x10) goto LAB_080aeeda;
    *puVar5 = 0x100;
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) goto LAB_080aeeda;
    iVar4 = *(int *)(param_1 + 0x50) + 0xa00;
    *(int *)(param_1 + 0x50) = iVar4;
    if (iVar4 <= *(int *)(param_1 + 0xc0)) goto LAB_080aeeda;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xc0);
  }
  else {
    if (bVar1 != 2) goto LAB_080aeeda;
    psVar6 = (short *)(param_1 + 0xc4);
    sVar3 = *psVar6;
    *psVar6 = sVar3 + 0x40;
    if ((short)(sVar3 + 0x40) < 0x101) goto LAB_080aeeda;
    *psVar6 = 0x100;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
LAB_080aeeda:
  *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0xc4);
  *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(param_1 + 0xc6);
  if (*(char *)(param_1 + 0xf) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

