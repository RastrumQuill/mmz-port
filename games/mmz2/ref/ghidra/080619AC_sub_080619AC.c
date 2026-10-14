// sub_080619AC at 0x080619AC (thumb)

undefined4 sub_080619AC(int param_1)

{
  ushort uVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  byte *pbVar7;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_080032EC(0xdc);
    sub_08006E08(param_1 + 0x74,&DAT_0833d4e8);
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 0x200;
    *(undefined2 *)(param_1 + 0xbc) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_080128D4(param_1);
    break;
  case 2:
    sub_08002D68(0x38,0x40);
    iVar5 = sub_08012C64(param_1);
    sub_08002D68(0x35,(uint)(iVar5 << 0x18) >> 0x13 | 0x200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080128D4(param_1);
    sub_08002EA0(0x38);
    cVar3 = sub_08002EA0(0x35);
    if (cVar3 != '\x03') {
      return in_lr;
    }
    goto LAB_08061b44;
  case 4:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    DAT_0202e01d = 2;
    *(undefined2 *)(param_1 + 0xbc) = 0x60;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_08002EA0(0x38);
    sub_08002EA0(0x35);
    puVar6 = (ushort *)(param_1 + 0xbc);
    uVar1 = *puVar6;
    *puVar6 = uVar1 - 1;
    if ((ushort)(uVar1 - 1) == 0x20) {
      DAT_0202e01d = 0;
    }
    uVar4 = (uint)*puVar6;
    goto LAB_08061b40;
  case 6:
    sub_080032EC(0xd2);
    pbVar7 = (byte *)(param_1 + 0xbf);
    uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar4 & 0x7fffffff;
    *pbVar7 = *pbVar7 + 1 + ((byte)(uVar4 * 2 >> 0x11) & 1);
    bVar2 = sub_080EF330(*pbVar7,3);
    *pbVar7 = bVar2;
    iVar5 = *(int *)(param_1 + 0xc0) + -0x7800;
    *(int *)(param_1 + 0x54) = iVar5;
    *(uint *)(param_1 + 0x54) = iVar5 + (uint)*pbVar7 * 0x7800;
    DAT_0202e01d = 3;
    *(undefined2 *)(param_1 + 0xbc) = 0x40;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    sub_08002EA0(0x38);
    sub_08002EA0(0x35);
    break;
  case 8:
    sub_08002EF0(0x35);
    sub_08002EF0(0x38);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_08002D68(0x39,0x40);
    iVar5 = sub_08012C64(param_1);
    sub_08002D68(0x36,(uint)(iVar5 << 0x18) >> 0x13 | 0x200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 9:
    sub_080128D4(param_1);
    sub_08002EA0(0x39);
    cVar3 = sub_08002EA0(0x36);
    if (cVar3 == '\x03') {
      sub_08002EF0(0x36);
      sub_08002EF0(0x39);
      *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xfffffdff;
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    goto switchD_080619c0_caseD_a;
  }
  iVar5 = *(ushort *)(param_1 + 0xbc) - 1;
  *(ushort *)(param_1 + 0xbc) = (ushort)iVar5;
  uVar4 = iVar5 * 0x10000;
LAB_08061b40:
  if (uVar4 == 0) {
LAB_08061b44:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
switchD_080619c0_caseD_a:
  return in_lr;
}

