// sub_080D01FC at 0x080D01FC (thumb)

undefined4 sub_080D01FC(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  cVar2 = sub_08002EA0(*(undefined *)(param_1 + 0xb9));
  sub_080128D4(param_1);
  if ((byte)(*(char *)(param_1 + 0xd) - 1U) < 10) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb4);
    pbVar6 = (byte *)(param_1 + 0xb8);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb4) + (short)(&DAT_080ef450)[*pbVar6] * 4;
    *pbVar6 = *pbVar6 + 2;
  }
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    *(undefined2 *)(param_1 + 0x50) = 0x100;
    *(undefined2 *)(param_1 + 0x52) = 0x100;
    iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x18) + 4) + 0x58) + -0x4000;
    *(int *)(param_1 + 0xb4) = iVar5;
    *(int *)(param_1 + 0x58) = iVar5;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x20) == 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0xba) = 0xc0;
    break;
  case 2:
    uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 100) +
         (short)(&DAT_080ef450)[(uVar4 * 2 >> 0x11 & 0xff) + 0x40 & 0xff] * 2;
    uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar4 & 0x7fffffff;
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x68) + (short)(&DAT_080ef450)[uVar4 * 2 >> 0x11 & 0xff] * 2;
    cVar2 = *(char *)(param_1 + 0xba) + -1;
    *(char *)(param_1 + 0xba) = cVar2;
    goto LAB_080d055e;
  case 3:
    sub_08002EF0(*(undefined *)(param_1 + 0xb9));
    *(undefined *)(param_1 + 0xb9) = 0x4d;
    iVar5 = sub_08012C64(param_1);
    sub_08002D68(0x4d,(uint)(iVar5 << 0x18) >> 0x13 | 0x200);
    break;
  case 4:
    if (cVar2 != '\x03') {
      return in_lr;
    }
    sub_08002EF0(*(undefined *)(param_1 + 0xb9));
    *(undefined *)(param_1 + 0xb9) = 0x4c;
    iVar5 = sub_08012C64(param_1);
    sub_08002D68(0x4c,(uint)(iVar5 << 0x18) >> 0x13 | 0x200);
    *(undefined *)(param_1 + 0xba) = 0xff;
    break;
  case 5:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x40) == 0) {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0xba);
    if (cVar2 != '\0') {
      *(char *)(param_1 + 0xba) = cVar2 + -1;
      return in_lr;
    }
    bVar1 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if ((bVar1 & 0xf) == 0) {
      local_20 = *(int *)(param_1 + 0x54) +
                 *(int *)(&DAT_08349aac + (uint)*(byte *)(param_1 + 0x13) * 4);
      local_1c = *(int *)(param_1 + 0x58) + 0x800;
      sub_080BC790(&local_20,0,0);
      uVar3 = sub_080EF1E8(*(byte *)(param_1 + 0x13) + 1,5);
      *(undefined *)(param_1 + 0x13) = uVar3;
    }
    bVar1 = *(byte *)(*(int *)(param_1 + 0x18) + 9) & 1;
    goto joined_r0x080d04bc;
  case 6:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 1;
    break;
  case 7:
    cVar2 = *(char *)(param_1 + 0x12) + '\x01';
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\x01') {
      sub_08002EF0(*(undefined *)(param_1 + 0xb9));
      *(undefined *)(param_1 + 0xb9) = 0x4c;
      iVar5 = sub_08012C64(param_1);
      sub_08002D68(0x4c,(uint)(iVar5 << 0x18) >> 0x13 | 0x200);
    }
    else if (cVar2 == '\x10') {
      sub_08002EF0(*(undefined *)(param_1 + 0xb9));
      *(undefined *)(param_1 + 0xb9) = 0x4d;
      iVar5 = sub_08012C64(param_1);
      sub_08002D68(0x4d,(uint)(iVar5 << 0x18) >> 0x13 | 0x200);
    }
    else if (cVar2 == '\x14') {
      *(undefined *)(param_1 + 0x12) = 0;
    }
    bVar1 = *(byte *)(*(int *)(param_1 + 0x18) + 9) & 4;
joined_r0x080d04bc:
    if (bVar1 == 0) {
      return in_lr;
    }
    break;
  case 8:
    sub_08002EF0(*(undefined *)(param_1 + 0xb9));
    *(undefined *)(param_1 + 0xb9) = 0x4e;
    iVar5 = sub_08012C64(param_1);
    sub_08002D68(0x4e,(uint)(iVar5 << 0x18) >> 0x13 | 0x200);
    break;
  case 9:
    if (cVar2 != '\x03') {
      return in_lr;
    }
    sub_08002EF0(*(undefined *)(param_1 + 0xb9));
    *(undefined *)(param_1 + 0xb9) = 0x4b;
    iVar5 = sub_08012C64(param_1);
    sub_08002D68(0x4b,(uint)(iVar5 << 0x18) >> 0x13 | 0x200);
    break;
  case 10:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 8) != 0) {
      sub_080CF56C(param_1,3,1);
      sub_080CF56C(param_1,3,0);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  case 0xb:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x10) == 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0xc0;
    *(undefined4 *)(param_1 + 0x5c) = 0x30;
    *(undefined4 *)(param_1 + 0x60) = 0x40;
    break;
  case 0xc:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
LAB_080d055e:
    if (cVar2 != -1) {
      return in_lr;
    }
    break;
  case 0xd:
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  default:
    goto switchD_080d0258_caseD_e;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080d0258_caseD_e:
  return in_lr;
}

