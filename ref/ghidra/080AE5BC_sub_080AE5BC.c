// sub_080AE5BC at 0x080AE5BC (thumb)

undefined4 sub_080AE5BC(int param_1)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  ushort *puVar5;
  short *psVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C7B4(param_1);
    sub_0809C930(param_1,0);
    sub_0809C980(param_1);
    *(undefined *)(param_1 + 0x44) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined2 *)(param_1 + 0xc4) = 0x100;
    *(undefined2 *)(param_1 + 0xc6) = 0x100;
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
    *(undefined *)(param_1 + 0x1e) = 0xd;
    sub_08001EAC(0xd4);
  }
  sub_0809C980(param_1);
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    puVar5 = (ushort *)(param_1 + 0xc6);
    uVar2 = *puVar5;
    *puVar5 = (ushort)(uVar2 - 0x10);
    if (0x7f < (int)((uVar2 - 0x10) * 0x10000) >> 0x10) goto LAB_080ae6b4;
    *puVar5 = 0x80;
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) goto LAB_080ae6b4;
    puVar5 = (ushort *)(param_1 + 0xc4);
    uVar2 = *puVar5;
    *puVar5 = (ushort)(uVar2 - 0x40);
    if (3 < (int)((uVar2 - 0x40) * 0x10000) >> 0x10) goto LAB_080ae6b4;
    *puVar5 = 4;
  }
  else {
    if (bVar1 != 2) goto LAB_080ae6b4;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x800;
    psVar6 = (short *)(param_1 + 0xc6);
    sVar3 = *psVar6;
    *psVar6 = sVar3 + 0x20;
    if (0x200 < (short)(sVar3 + 0x20)) {
      *psVar6 = 0x200;
    }
    uVar4 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
    if (uVar4 < 0x2001) goto LAB_080ae6b4;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
LAB_080ae6b4:
  *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0xc4);
  *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(param_1 + 0xc6);
  return in_lr;
}

