// sub_08069050 at 0x08069050 (thumb)

undefined4 sub_08069050(int param_1)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar5 = *(int *)(param_1 + 0xb8);
    *(undefined *)(param_1 + 0x12) = 0;
    if (*(char *)(param_1 + 0x10) == '\0') {
      *(int *)(param_1 + 100) = *(int *)(iVar5 + 0x54) + -0x3800;
      *(int *)(param_1 + 0x68) = *(int *)(iVar5 + 0x58) + -0x2800;
      sub_0809876C(iVar5,param_1 + 0x54,param_1 + 100,8,3);
      sub_0809876C(iVar5,param_1 + 0x54,param_1 + 100,8,5);
    }
    else if (*(char *)(param_1 + 0x10) != '\x04') {
      iVar2 = param_1 + 0x54;
      iVar4 = *(int *)(param_1 + 0x2c) + 0x54;
      sub_0809876C(iVar5,iVar2,iVar4,4,1);
      sub_0809876C(iVar5,iVar2,iVar4,4,2);
      sub_0809876C(iVar5,iVar2,iVar4,4,3);
    }
    sub_080032EC(0xf9);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  puVar3 = (ushort *)(param_1 + 0xb6);
  iVar5 = (uint)*puVar3 * (uint)*(ushort *)(&DAT_0833e090 + (uint)*(byte *)(param_1 + 0x10) * 2);
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  sub_080693E4(param_1,(uint)*(byte *)(param_1 + 0xb4) * (*(byte *)(param_1 + 0x10) + 1) - 0x40 &
                       0xff,(uint)(iVar5 << 8) >> 0x10);
  uVar1 = *puVar3;
  *puVar3 = uVar1 + 0x10;
  if (0x1ff < (ushort)(uVar1 + 0x10)) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

